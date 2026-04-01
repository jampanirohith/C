import numpy as np

i16 = np.dtype(np.int16)
print(i16)

lst = [[3.4, 8.7, 9.9],
       [1.1, -7.8, -0.7],
       [4.1, 12.3, 4.8]]

A = np.array(lst, dtype = i16)
print(A)