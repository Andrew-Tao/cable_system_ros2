def triangle_wave(t, period=1.0, amplitude=1.0, offset=0.0):
    """
    Triangle wave.

    Parameters
    ----------
    t : float
        Time (seconds)
    period : float
        Wave period
    amplitude : float
        Peak amplitude (±amplitude)
    offset : float
        DC offset

    Returns
    -------
    float
        Triangle wave value
    """
    phase = t % period   
    quat_period = period / 4   
    k = amplitude / quat_period 

    if phase <= quat_period:
        value = k * phase
    elif phase > quat_period and phase <= 3 * quat_period:
        value = -k * phase + 2 * amplitude
    elif phase > (3 * quat_period) and phase <= period:
        value = k * phase - 4 * amplitude
    
    return value + offset
