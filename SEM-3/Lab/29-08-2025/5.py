def compute_results(a, b):
    multiplication = a*b
    division = a/b
    return multiplication, division

result = compute_results(120,34)
type(result)
print("Results:")

for value in result:
    print(value) 