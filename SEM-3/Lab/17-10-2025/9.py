import numpy as np

B= np.array([1,2,3])
print(B[:, np.newaxis])

A = np.array([[11, 12, 13],
              [21, 22, 23],
              [31, 32, 33]])

print("\n", A * B[:, np.newaxis])