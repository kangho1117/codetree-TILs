MAX_T = 1000000
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
#print(time_b)
if time_a-1 < time_b-1:
    for i in range(time_a-1, time_b):
        pos_a[i] = pos_a[time_a-1]
if time_b-1 < time_a-1:
    for i in range(time_b-1, time_a):
        pos_b[i] = pos_b[time_b-1]

cnt = 0

for i in range(1, len(pos_a)):
    #print(i, pos_a[i], pos_b[i])
    if i == max(time_a, time_b):
        break
    if pos_a[i] == pos_b[i] and pos_a[i-1] != pos_b[i-1]:
        #print(i-2, pos_a[i-2], pos_b[i-2],cnt)
        #print(i-1, pos_a[i-1], pos_b[i-1],cnt)
        cnt += 1
        #print(cnt)
print(cnt)