nx, ny = 0, 0

direct_num = 3
dx, dy = [1, 0, -1, 0], [0, -1, 0, 1]
direct_arr = list(input())

for i in range(len(direct_arr)):
    if direct_arr[i] == 'L':
        direct_num = (direct_num - 1 + 4) % 4
    elif direct_arr[i] == 'R':
        direct_num = (direct_num + 1) % 4

    else:
        nx, ny = nx + dx[direct_num], ny + dy[direct_num]

print(nx, ny)