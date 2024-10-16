import sys
arr_2d = [list(map(int, input().split())) for _ in range(19)]

answer1 = 0
ans_i, ans_j = 0, 0

def in_range(x, y):
    return 0 <= x and x < 19 and 0 <= y and y < 19

dxs, dys = [1,1,1,-1,-1,-1,0,0],[-1,0,1, -1, 0, 1, -1, 1]

for i in range(19):
    for j in range(19):

        if arr_2d[i][j] == 0:
            continue
        for dx, dy in zip(dxs, dys):
            curt = 1
            curtx = i
            curty = j

            while True:
                nx = curtx + dx
                ny = curty + dy

                if not in_range(nx, ny):
                    break
                if arr_2d[nx][ny] != arr_2d[i][j]:
                    break
                curt += 1
                curtx = nx
                curty = ny
            if curt == 5:
                print(arr_2d[i][j])
                print(i + 2 * dx + 1 , j + 2 * dy + 1)
                sys.exit()
print(0)

print(answer1)
if ans_i != 0 and ans_j != 0:
    print(ans_i, ans_j)