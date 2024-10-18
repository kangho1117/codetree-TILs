N,K = map(int, input().split())

MAX_NUM = 10000

placed = [0] * (MAX_NUM + 1)

for _ in range(N):
    x, c = input().split()
    x = int(x)
    placed[x] = 1 if c == 'G' else 2


max_cnt = 0
for i in range(1, MAX_NUM - K + 1) :
    alpha_num = 0
    for j in range(i, i + K + 1):
        alpha_num += placed[j]
    
    max_cnt = max(alpha_num, max_cnt)

print(max_cnt)