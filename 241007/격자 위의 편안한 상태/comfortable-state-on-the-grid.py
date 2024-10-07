n,m = map(int, input().split())

arr_2d = [[0] * n for _ in range(n)]

dxs,dys = [0,1,0,-1],[1,0,-1,0]

def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < n

for _ in range(m):
    r,c = map(int, input().split())
    r,c = r-1, c-1
    arr_2d[r][c] = 1
    cnt = 0
    for dx,dy in zip(dxs, dys):
        dr,dc = r +dx, c + dy
        if in_range(dr, dc) and arr_2d[dr][dc] == 1:
            cnt += 1
    if cnt == 3:
        print(1)
    else:
        print(0)