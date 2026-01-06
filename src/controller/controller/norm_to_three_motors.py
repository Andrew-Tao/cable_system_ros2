
import numpy as np
def project(a,b):
    result = np.dot(a,b) / np.dot(b,b) * np.linalg.norm(b)
    return result

def stick_norm_to_triangle(x, y):
    """
    Map normalized joystick (x,y) ∈ [-1,1] into an equilateral triangle.
    """
    vector = np.array([x, y])
    length = np.linalg.norm(vector)
    if length > 0.0:
        vector = vector / length
    
    vector1 = np.array([0.0, 1.0])
    vector2 = np.array([-np.sqrt(3)/2, -0.5])
    vector3 = np.array([np.sqrt(3)/2, -0.5])

    proj1 = project(vector, vector1)
    proj2 = project(vector, vector2)
    proj3 = project(vector, vector3)

    result = np.array([proj1,proj2,proj3])

    return result

