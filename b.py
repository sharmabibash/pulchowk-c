
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))
matrix1 = []
matrix2 = []

print("Enter the first matrix:")
for i in range(rows):
    row = list(map(int, input(f"Enter row {i+1} (space-separated values): ").split()))
    matrix1.append(row)

print("Enter the second matrix:")
for i in range(rows):
    row = list(map(int, input(f"Enter row {i+1} (space-separated values): ").split()))
    matrix2.append(row)

result = [[0 for _ in range(cols)] for _ in range(rows)]
for i in range(rows):
    for j in range(cols):
        result[i][j] = matrix1[i][j] + matrix2[i][j]

print("Resultant Matrix:")
for row in result:
    print(" ".join(map(str, row)))

