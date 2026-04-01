import numpy as np

X = np.random.randint(1, 5, (4,2,3))
print(X)

Y = np.random.randint(1, 5, (2,3,5))


R = np.dot(X, Y)

print("\nShapes:")
print("X.shape = ", X.shape, "\nY.shape = ",Y.shape, "\nR.shape = ",R.shape)