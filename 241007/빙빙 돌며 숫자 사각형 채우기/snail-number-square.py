#격자니까 행렬
n,m = map(int, input().split())

arr_2d = [[0] * m for _ in range(n)]

def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < m

dxs, dys = [0, 1, 0, -1], [1, 0 ,-1, 0]
dir_num = 0
x,y = 0,0
arr_2d[x][y] = 1
for i in range(2, n*m + 1):

    nx, ny = x + dxs[dir_num], y + dys[dir_num]

    if  not in_range(nx, ny) or arr_2d[nx][ny] != 0:
        dir_num = (dir_num + 1) % 4

    x, y = x + dxs[dir_num], y + dys[dir_num]
    arr_2d[x][y] = i

for arr in arr_2d:
    for elem in arr:
        print(elem, end = ' ')
    print("")