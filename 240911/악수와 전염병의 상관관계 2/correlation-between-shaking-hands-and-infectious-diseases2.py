MAX_T = 250
N, K, P, T = map(int, input().split())

t_arr = []
devel_2d = [[0 for _ in range(MAX_T + 1)] for _ in range(N+1)]

dev_cnt = [0] * (N+1)
for i in range(1, MAX_T+1):
    devel_2d[P][i] = 1

arr_2d = [list(map(int, input().split())) for _ in range(T)]


arr_2d.sort(key = lambda x:x[0])

for t,x,y in arr_2d:
    t_arr.append(t)
    if devel_2d[x][t] == 1 and dev_cnt[x] < K:
        #print(t, x, y)
        for i in range(t,MAX_T):
            devel_2d[y][i] = 1
        dev_cnt[x] += 1
    elif devel_2d[y][t] == 1 and dev_cnt[y] < K:
        #print(t, x, y)
        for i in range(t,MAX_T):
            devel_2d[x][i] = 1
        dev_cnt[y] += 1
        
  
for i in range(1,N+1):
    print(devel_2d[i][max(t_arr)], end = '')