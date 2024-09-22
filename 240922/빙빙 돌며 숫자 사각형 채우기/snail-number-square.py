dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0]
n,m = map(int, input().split())

answer_arr = [[0 for _ in range(m)] for _ in range(n)]

def in_range(x,y):
    return 0 <= x and x < m and 0 <= y and y < n

x,y = 0,0

dir_num = 0

answer_arr[x][y] = 1

for i in range(2, n * m + 1):

    nx, ny = x + dxs[dir_num], y + dys[dir_num]

    if not in_range(nx, ny) or answer_arr[nx][ny] != 0:
        dir_num = (dir_num + 1) % 4
    x, y = x + dxs[dir_num], y + dys[dir_num]

    answer_arr[x][y] = i

for arr in answer_arr:
    for elem in arr:
        print(elem, end = ' ')
    print()