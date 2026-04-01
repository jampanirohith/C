matrix = [[2,4,6], [8, 10, 12], [14,16,18]]
print(matrix)

print("Row-wise output:")
for row in matrix:
    print(row)

print("Matrix style output:")
for i in range(len(matrix)):
    for j in range(len(matrix)):
        print(matrix[i][j], end='')
    print()