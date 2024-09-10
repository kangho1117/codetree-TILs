MAX_T = 100000
n, m = map(int, input().split())

pos_a, pos_b = [0] * (MAX_T + 1), [0] * (MAX_T + 1)

time_a = 1

for _ in range(n):
    t, d = input().split()
    t = int(t)
    for _ in range(t):
        pos_a[time_a] = pos_a[time_a - 1] + (1 if d == 'R' else -1)
        time_a += 1

time_b = 1

for _ in range(m):
    t, d = input().split()
    t = int(t)
    for _ in range(t):
        pos_b[time_b] = pos_b[time_b - 1] + (1 if d == 'R' else -1)
        time_b += 1

cnt = 0

for i in range(2, len(pos_a)):
    if pos_a[i] == pos_b[i] and pos_a[i-1] != pos_b[i-1]:
        cnt += 1
print(cnt)