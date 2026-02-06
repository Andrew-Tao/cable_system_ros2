
from rclpy.node import Node
from geometry_msgs.msg import Vector3
from load_cell.load_cell import LoadCell
import rclpy

class JumpRejector:
    """
    Jump/spike rejector with re-acquire logic:
      - Reject samples that jump too far from last_good
      - Reacquire after K consecutive 'plausible' samples
      - Threshold adapts using EWMA of typical |delta|
    """
    def __init__(
        self,
        abs_jump=200.0,         # hard absolute jump limit (set in your units)
        rel_jump=0.25,          # relative jump limit (fraction of last_good)
        sigma_mult=6.0,         # how many "typical deltas" allowed
        ewma_alpha=0.1,         # noise EWMA update rate
        reacquire_k=3,          # require K consecutive plausible samples to relock
        min_noise=1e-6          # avoid zero threshold
    ):
        self.abs_jump = float(abs_jump)
        self.rel_jump = float(rel_jump)
        self.sigma_mult = float(sigma_mult)
        self.ewma_alpha = float(ewma_alpha)
        self.reacquire_k = int(reacquire_k)
        self.min_noise = float(min_noise)

        self.last_good = None
        self.noise = None  # EWMA of |delta| for accepted samples
        self.bad_streak = 0
        self.reacquire_count = 0
        self.candidate_sum = 0.0

    def _threshold(self):
        # If we don't have noise yet, fall back to abs_jump + rel_jump
        noise_term = self.sigma_mult * (self.noise if self.noise is not None else self.min_noise)
        base = abs(self.last_good) if self.last_good is not None else 0.0
        return max(self.abs_jump, self.rel_jump * base, noise_term)

    def update(self, x):
        """
        Returns (accepted_value, accepted_bool).
        If rejected, accepted_value is last_good (hold-last-value).
        """
        x = float(x)

        # first sample: accept
        if self.last_good is None:
            self.last_good = x
            self.noise = self.min_noise
            return self.last_good, True

        delta = abs(x - self.last_good)
        thr = self._threshold()

        if delta <= thr:
            # Plausible sample
            if self.bad_streak > 0:
                # We were in a "bad" period: require K consecutive plausible samples before relocking
                self.reacquire_count += 1
                self.candidate_sum += x

                if self.reacquire_count >= self.reacquire_k:
                    new_good = self.candidate_sum / self.reacquire_k
                    # relock
                    self.last_good = new_good
                    self.bad_streak = 0
                    self.reacquire_count = 0
                    self.candidate_sum = 0.0
                    # update noise using the relock step size
                    step = abs(self.last_good - new_good)
                    self.noise = (1 - self.ewma_alpha) * self.noise + self.ewma_alpha * max(step, self.min_noise)
                    return self.last_good, True
                else:
                    # still reacquiring: hold last_good
                    return self.last_good, False
            else:
                # Normal operation: accept and update noise estimate
                step = abs(x - self.last_good)
                self.last_good = x
                self.noise = (1 - self.ewma_alpha) * self.noise + self.ewma_alpha * max(step, self.min_noise)
                return self.last_good, True

        # Rejected spike
        self.bad_streak += 1
        self.reacquire_count = 0
        self.candidate_sum = 0.0
        return self.last_good, False
