n = int(input())

list_arr = [list(map(int, input().split())) for _ in range(n)]
#print(list_arr)
def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < n

dxs,dys = [0, 1, 0, -1], [1, 0, -1, 0]
answer = 0
for i in range(n):
    for j in range(n):
        cnt = 0
        for dx, dy in zip(dxs, dys):
            nx, ny = i + dx, j + dy
            if in_range(nx, ny) and list_arr[nx][ny] == 1:
                cnt += 1
        if cnt >= 3:
            answer += 1

print(answer)