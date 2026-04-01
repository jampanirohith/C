import numpy as np
A = np.array([[1,2],
              [3,4]])

print(np.linalg.norm(A, 'fro'))
print(np.linalg.norm(A, 1))
print(np.linalg.norm(A, np.inf))
print(np.linalg.norm(A,2))