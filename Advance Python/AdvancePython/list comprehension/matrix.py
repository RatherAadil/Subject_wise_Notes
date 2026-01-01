matrix1 = [[1, 2, 3], 
           [4, 5, 6], 
           [7, 8, 9]]


matrix2 = [[9, 8, 7],
           [6, 5, 4], 
           [3, 2, 1]]


result_matrix = [
[matrix1[i][j] + matrix2[i][j] for j in range(len(matrix1[0]))]
for i in range(len(matrix1))
]

# print(result_matrix)




#matric addition using nested loops
result= [[0,0,0],[0,0,0],[0,0,0]]


#iterate through rows
for i in range(len(matrix1)):

    #iterate through colomns
    for j in range(len(matrix1[0])):
        result[i][j]= matrix1[i][j] + matrix2[i][j]


for r in result:
    print(r)