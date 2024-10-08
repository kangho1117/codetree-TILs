from string import ascii_uppercase
n, m = map(int, input().split())

arr_2d = [[0] * m for _ in range(n)]

dxs, dys = [0,1,0,-1], [1,0,-1,0]

alphabet_list = list(ascii_uppercase)
#print(alphabet_list)
def in_range(x,y):
    return 0 <= x and x < n and 0<=y and y < m

x,y = 0,0
j = 1
dir_num = 0
arr_2d[x][y] = alphabet_list[0]
for i in range(1, n*m):
    dx, dy = x + dxs[dir_num], y + dys[dir_num]
    if not in_range(dx, dy) or arr_2d[dx][dy] != 0:
        dir_num = (dir_num + 1) % 4
    if i % 26 == 0:
        j = 0

    x, y = x + dxs[dir_num], y + dys[dir_num]
    arr_2d[x][y] = alphabet_list[j]
    #print(j,x,y,arr_2d[x][y])
    j += 1

    

for arr in arr_2d:
    for elem in arr:
        print(elem, end = ' ')
    print()