import numpy as np
import matplotlib.pyplot as plt

n = 50
h = 1.0/(n+1)

L = -2*np.eye(n) + np.eye(n,k=1) + np.eye(n,k=-1)
L = L/(h*2)

vale, vecs =  np.linalg.eigh(L)
print("First 3 eigenvaluen;", vale[:3])

x = np.linspace(0, 1, n+2) [1:-1]

plt.plot(x, vecs[:,0], label="1st mode")
plt.plot(x, vecs[:,1], label="2nd mode") 
plt.plot(x, vecs[:,2], label="3rd node")
plt.legend(); plt.show()