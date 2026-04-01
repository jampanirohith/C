import numpy as np

dt = np.dtype([('country', np.unicode_, 20),
               ("density", 'i4'),
               ('area', 'i4'),
               ('population', 'i4')])

population_table = np.array([
    ('Netherlands', 393, 41526, 16928800),
    ('Belgium', 337, 30510, 11007020),
    ('United Kingdom', 256, 243610, 62262000),
], dtype=dt)

print(population_table[:2])
print(population_table['density'])
print(population_table['country'])