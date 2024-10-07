# / -> 반시계 90
# \ -> 시계 90

n = int(input())

arr_2d = [input() for _ in range(n)]

dxs, dys = [1, 0, -1, 0], [0, -1, 0 ,1]

k = int(input())

def initialize(num):
    if num <= n:
        return 0, num - 1, 0
    elif num <= 2 * n :
        return num - n - 1, n - 1, 1
    elif num <= 3 * n:
        return n - 1, n - (num - 2 * n), 2
    else :
        return n - (num - 3 * n), 0, 3

def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < n

x, y, move_dir = initialize(k)

move_num = 0
while in_range(x,y):
    if arr_2d[x][y] == '/':
        move_dir = move_dir ^ 1
        x, y = x + dxs[move_dir], y + dys[move_dir]
    else:
        move_dir = 3 - move_dir
        x, y = x + dxs[move_dir], y + dys[move_dir]   
    move_num += 1
print(move_num)