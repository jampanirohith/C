l1 = [1,2,3,4]
l2 = [2,3,4,5]
l3 = [3,4,5,6]

l4 = list(map(lambda x,y,z : x*y*z, l1, l2, l3))
print(l4)
