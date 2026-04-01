def display(**kwargs) :
    for k, v in kwargs.items():
        print(k, "=", v, end= '')
    print()
display(n1=10, n2=20, n3=30)
display(rno=100 , name="Ravi ", mark =70 , subject="Chemistry ")