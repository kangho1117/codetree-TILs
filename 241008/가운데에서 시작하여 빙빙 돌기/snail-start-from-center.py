n = int(input())

arr_2d = [[0]*n for _ in range(n)]

def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < n

x,y = (n // 2),(n // 2)

dxs, dys = [0,1,0,-1], [1,0,-1,0]

dir_num = 0

arr_2d[x][y] = 1


for i in range(2,n*n+1):

    dx, dy = x + dxs[dir_num], y + dys[dir_num]

    if not in_range(dx, dy):
        dir_num = (dir_num + 4 -1) % 4
    
    x, y = x + dxs[dir_num], y + dys[dir_num]
    arr_2d[x][y] = i
    #print(x,y,arr_2d[x][y])

    move_num = (dir_num + 4 -1) % 4
    if  arr_2d[dx + dxs[move_num]][dy + dys[move_num]] == 0:
        dir_num = (dir_num + 4 -1) % 4

for arr in arr_2d:
    for elem in arr:
        print(elem, end =' ')
    print()