n,m = map(int, input().split())

arr_2d = [[0]*m for _ in range(n)]

dxs, dys = [1, 0, -1, 0], [0, -1, 0, 1]

def in_range(x,y):
    return 0 <= x and x < n and 0 <= y and y < m

x,y = 0,0
move_dir = 0
arr_2d[x][y] = 1

for i in range(2, n*m+1):
    dx, dy = x + dxs[move_dir], y + dys[move_dir]
    if not in_range(dx,dy) or arr_2d[dx][dy] != 0:
        move_dir = (move_dir + 4 -1) % 4
    x,y = x + dxs[move_dir], y + dys[move_dir]
    arr_2d[x][y] = i

for arr in arr_2d:
    for elem in arr:
        print(elem, end = ' ')
    print()