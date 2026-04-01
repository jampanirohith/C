import numpy as np

dt = np.dtype([('density', np.int32)])
x = np.array([(393,), (337,), (256,)], dtype=dt)

print(x)
print(repr(x))

print(x['density'])