n,m = map(int, input().split())

pair_arr = [tuple(map(int, input().split())) for _ in range(m)]
answer = 0
for i in range(1, n+1):
    for j in range(1, n+1):
        cnt = 0
        for a,b in pair_arr:
            if (i,j) in [(a,b), (b,a)]:
                cnt += 1
        answer = max(answer, cnt)

print(answer)