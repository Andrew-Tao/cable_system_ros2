import cv2
import os
from datetime import datetime
from pathlib import Path
import numpy as np
cv2.setLogLevel(0)
import time

class VisionSystem:
	def __init__(self):
		
		self.camera = cv2.VideoCapture(0)
		if not self.camera.isOpened():
			raise IOError("Cannot Open Camera")
		self.path = None
		self.frame_counter = 0
		self.start_time = None
		self.frame_timestamps = []
		self.traj = None
		self.speeds = None
		self.color_mask_lower = None
		self.color_mask_upper = None
		
	def capture_frame(self):
		self.frame_timestamps.append(time.time()-self.start_time)
		ret,frame = self.camera.read()
		if ret:
			self.frame_counter += 1
			return frame
			print(f"[INFO] Captured {filename}")
		else: 
			print("[Warning] Fail to capture frame")
			return None
			
	def optical_flow_track(self,lower,upper):
		self.color_mask_lower = lower
		self.color_mask_upper = upper
		frames = self.load_jpg_frames()
		#print(f"[Vision_capture]Number of Frames:{len()}")
		self.traj, self.speeds = self.run_sparse_flow(frames)
		
		return self.traj, self.speeds
	
		
		
	def color_mask_and_centroid(self,bgr_img):
		hsv = cv2.cvtColor(bgr_img, cv2.COLOR_BGR2HSV)
		
		#HSV range for color

		
		mask = cv2.inRange(hsv, self.color_mask_lower, self.color_mask_upper)
		
		mask = cv2.medianBlur(mask,5)

		kernel = np.ones((3,3),np.uint8)
		mask = cv2.morphologyEx(mask,cv2.MORPH_OPEN,kernel,iterations = 1)
		msk = cv2.morphologyEx(mask,cv2.MORPH_CLOSE,kernel,iterations = 1)
		
	
		cv2.imshow("imo",bgr_img)
		cv2.imshow("image",msk)
		cv2.waitKey(0)
		cv2.destroyAllWindows()
		# Calculate the Cetroid
		M = cv2.moments(mask)
		if M["m00"] > 0:
			cx = int(M["m10"]/M["m00"])
			cy = int(M["m01"]/M["m00"])
			return mask, (cx,cy)
		else:
			return mask, None 
	

	def load_jpg_frames(self):
		# Generate Paths
		frame_paths = {}
		for i in range(self.frame_counter):
			path = os.path.join(self.path,f"frame_{i:04d}.jpg")
			frame_paths[i] = path
		# Loads frames
		frames = {}
		for key,path in frame_paths.items():
			img = cv2.imread(path)
			if img is None:
				raise FileNotFoundError(f"Could not load {path}")
			frames[key] = {"img":img,"t":self.frame_timestamps[key]}
		return frames
		
			
			

	def run_sparse_flow(self,frames, fps=None):
		
		lk_params = dict(
			winSize  = (21, 21),
			maxLevel = 3,  # pyramid levels for larger motion
			criteria = (cv2.TERM_CRITERIA_EPS | cv2.TERM_CRITERIA_COUNT, 30, 0.01)
			)
		# order frames by key
		keys = sorted(frames.keys())
		#print(keys)
		# get first frame and initial point from red centroid
		first = frames[keys[0]]["img"]
		#print("The type is",type(first))
		prev_gray = cv2.cvtColor(first, cv2.COLOR_BGR2GRAY)
		_, c0 = self.color_mask_and_centroid(first)
		if c0 is None:
			raise ValueError("Blue sticker not detected in first frame.")
		p0 = np.array([[c0]], dtype=np.float32)  # shape (1,1,2)

		# storage
		traj = []          # [(t,x, y)]
		speeds = []        # pixels/s between frames
		prev_t = frames[keys[0]]["t"] 
		traj.append([prev_t, float(p0[0,0,0]), float(p0[0,0,1])])
		
		
		for k in keys[1:]:
			img = frames[k]["img"] 
			t   = frames[k]["t"]  

			gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
			p1, st, err = cv2.calcOpticalFlowPyrLK(prev_gray, gray, p0, None, **lk_params)
			if st[0][0] == 1:  # successfully tracked
				x, y = float(p1[0,0,0]), float(p1[0,0,1])
				traj.append([t, x, y])
				# velocity magnitude in pixels/s
				dt = max(t - prev_t, 1e-6)
				dx = x - float(p0[0,0,0])
				dy = y - float(p0[0,0,1])
				speeds.append(np.hypot(dx, dy) / dt)
				# roll
				p0 = p1
				prev_gray = gray
				prev_t = t
				print("GET")
			else:
				print("Lost")
				# lost the point → re-detect by color (fallback)
				_, c = self.color_mask_and_centroid(img)
				if c is not None:
					p0 = np.array([[c]], dtype=np.float32)
					prev_gray = gray
					prev_t = t
				# (else: keep going; you can also mark NaN)

		return traj, speeds  # lists
		



