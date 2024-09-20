n = int(input())

arr_2d = [list(map(int, input().split())) for _ in range(n)]

dxs, dys = [0,1,0,-1],[1,0,-1,0]

def in_range(x,y):
    return 0 <= x and x < n and 0 <= y and y < n

answer = 0
for i in range(n):
    for j in range(n):
        cnt = 0
        for dx,dy in zip(dxs,dys):
            if in_range(i+dx, j+dy) and arr_2d[i+dx][j+dy] == 1 :
                cnt += 1
        if cnt >= 3:
            answer += 1
print(answer)