arr_2d = [list(map(int, input().split())) for _ in range(19)]

answer1 = []
for i in range(14):
    for j in range(14):
        #print(arr_2d[i][j])
        if arr_2d[i][j] != 0 and  arr_2d[i][j] == arr_2d[i+1][j] and arr_2d[i][j] == arr_2d[i+2][j] and arr_2d[i][j] == arr_2d[i+3][j] and arr_2d[i][j] == arr_2d[i+4][j]:
            answer1 = arr_2d[i][j]
            ans_i, ans_j = i + 1 + 2, j + 1
        if arr_2d[i][j] != 0 and arr_2d[i][j] == arr_2d[i][j+1] and arr_2d[i][j] == arr_2d[i][j+2] and arr_2d[i][j] == arr_2d[i][j+3] and arr_2d[i][j] == arr_2d[i][j+4]:
            answer1 = arr_2d[i][j]
            ans_i, ans_j = i + 1, j + 1 + 2
        if arr_2d[i][j] != 0 and arr_2d[i][j] == arr_2d[i+1][j+1] and arr_2d[i][j] == arr_2d[i+2][j+2] and arr_2d[i][j] == arr_2d[i+3][j+3] and arr_2d[i][j] == arr_2d[i+4][j+4]:
            answer1 = arr_2d[i][j]
            ans_i, ans_j = i + 1 + 2, j + 1 + 2
        if  j >= 4:
            if arr_2d[i][j] != 0 and arr_2d[i][j] == arr_2d[i+1][j-1] and arr_2d[i][j] == arr_2d[i+2][j-2] and arr_2d[i][j] == arr_2d[i+3][j-3] and arr_2d[i][j] == arr_2d[i+4][j-4]:
                answer1 = arr_2d[i][j]
                ans_i, ans_j = i + 1 + 2, j + 1 - 2

print(answer1)
print(ans_i, ans_j)