N, K, P, T = map(int, input().split())

hand_cnt = [K for _ in range(N+1)]
infect = [0 for _ in range(N+1)]
infect[P] = 1

arr_2d = [list(map(int, input().split())) for _ in range(T)]

arr_2d.sort(key = lambda x:x[0])

for t,x,y in arr_2d:
    if (infect[x] == 0 and infect[y] == 1) and hand_cnt[y] > 0:
        infect[x] = 1
        hand_cnt[y] -= 1
    elif (infect[x] == 1 and infect[y] == 0) and hand_cnt[x] > 0:
        infect[y] = 1
        hand_cnt[x] -= 1
    elif (infect[x] == 1 and infect[y] == 1) and (hand_cnt[x] > 0 or hand_cnt[y] > 0):
        hand_cnt[x] -= 1
        hand_cnt[y] -= 1

for i in range(1,N+1):
    print(infect[i], end = '')