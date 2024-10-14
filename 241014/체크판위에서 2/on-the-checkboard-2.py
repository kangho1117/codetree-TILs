r,c = map(int, input().split())

rc_arr = [list(input()) for _ in range(r)]

for i in range(1, r):
    for j in range(1, c):
        for k in range(i+1, r-1):
            for l in range(j+1,c-1):
                if rc_arr[0][0] != rc_arr[i][j] and  rc_arr[i][j] != rc_arr[k][l] and rc_arr[k][l] != rc_arr[r-1][c-1]:
                    cnt += 1

print(cnt)