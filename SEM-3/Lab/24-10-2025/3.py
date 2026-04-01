import numpy as np

A0, B0, C0 = 100.0, 0.0, 0.0

k1, k2 = 0.10, 0.05

t = np.arange(0, 50, 1, dtype=float)

A = A0 * np.exp(k1*t)

B = (k1*A0/(k1-k2)) * (np.exp(-k1*t)) - np.exp(-k2 * t)

C = A0 - A -B

print("Final concentrations at t =", t[-1])
print("A=", A[-1], "B=", B[-1], "C=", C[-1])

print("Total A+B+C=", A[-1] + B[-1] + C[-1])