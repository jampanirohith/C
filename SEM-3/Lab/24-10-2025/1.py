import numpy as np

A = np.array(([1, 1, 0],
             [1, 0, 1],
             [0, 1, 1]))

Q, R = np.linalg.qr(A)
print("Q:\n", Q)
print("R:\n", R)
print("Check Q*R:\n", Q*R)


U, S, Vt = np.linalg.svd(A)

print("U:\n", U)
print("Singular Values:\n", S)
print("V*T:\n", Vt)

Sigma = np.zeros_like(A, dtype=float)
np.fill_diagonal(Sigma, S)
print("Reconstructed:\n", U, Sigma @ Vt)