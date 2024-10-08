n, t = map(int, input().split())

direction_C = list(input())

move_num = 0
dxs, dys = [-1, 0, 1, 0], [0, 1, 0 ,-1]

def in_range(x,y):
    return 0 <= x and x < n and 0 <= y and y < n

arr_2d = [list(map(int, input().split())) for _ in range(n)]

x, y = n // 2, n // 2

cnt = arr_2d[x][y]

for i in range(len(direction_C)):

    if direction_C[i] == 'R':
        move_num = (move_num + 1) % 4 
    elif direction_C[i] == 'L':
        move_num = (move_num + 4 - 1) % 4
    elif direction_C[i] == 'F':
        dx, dy = x + dxs[move_num], y + dys[move_num]
        if not in_range(dx, dy):
            continue
        x, y = dx, dy
        cnt += arr_2d[x][y]
print(cnt)