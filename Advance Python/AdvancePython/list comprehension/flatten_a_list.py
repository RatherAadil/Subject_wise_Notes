lists = [[1,2,3],[3,4,5,6],[7,8,9]]

flatted = [elem for sublist in lists for elem in sublist]
print(flatted)