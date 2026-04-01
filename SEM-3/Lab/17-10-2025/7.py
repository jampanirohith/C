import numpy as np

A = np.array([[11, 12, 13],
             [21, 22, 23],
             [31, 32, 33]])
B = np.ones((3,3))

print(np.dot(A,B))

y = np.dot(A,B+1)
print(y)

