import numpy as np

A = np.array([[11, 12, 13],
             [21, 22, 23],
             [31, 32, 33]])
B = np.ones((3,3))

print("Adding to arrays: ")
print(A+B)

print("\n Multiplying two arrays: ")
print(A*(B+1))