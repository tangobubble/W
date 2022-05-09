""" def rotateMatrix(matrix, layer):
    # print("len: ", len(matrix[0]))
    # row = 0
    # col = 0
    # transpose = matrix
    # rowLength = len(matrix[0])
    # compute column length not row length as done here
    # columnLength = len(matrix[0])
    # for row in range(rowLength - 1):
    #     # for col in range(columnLength):
    #     matrix[row][col] = matrix[row + 1][col]
    #     matrix[row][col] = matrix[rowLength - 1][col + 1]
    # row = row + 1
    # col = col + """


def rotateMatrix(matrix, layer):
    size = len(matrix[0]) - 1
    # i = layer
    # while i < (size - layer):
    for i in range(layer, (size - layer)):
        top = matrix[layer][i]
        right = matrix[i][size - layer]
        bottom = matrix[size - layer][size - i]
        left = matrix[size - i][layer]

        matrix[layer][i] = left
        matrix[i][size - layer] = top
        matrix[size - layer][size - i] = right
        matrix[size - i][layer] = bottom
        # i = i + 1
    # print(matrix)


matrix = [
    [1,  2,  3, 4],
    [5,  6,  7, 8],
    [9, 10, 11, 12],
    [13, 14, 15, 16]
]
print("Original matrix:\n", matrix)
temp = matrix[0][0]
length = len(matrix[0])//2

for m in range(length):
    rotateMatrix(matrix, m)
print("Rotated matrix:\n", matrix)
