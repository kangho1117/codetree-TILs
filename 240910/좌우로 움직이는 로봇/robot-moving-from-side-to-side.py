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

if time_a > time_b:
    for i in range(time_a + 1, time_b+1):
        pos_a[i] = pos_a[time_a]
if time_b > time_a:
    for i in range(time_b + 1, time_a + 1):
        pos_b[i] = pos_b[time_b]

cnt = 0
#print(pos_a[14158],pos_b[14158],pos_a[14159],pos_b[14159])
for i in range(2, len(pos_a)):
    #print(i, pos_a[i], pos_b[i])
    if pos_b[i] == 0 and pos_a[i] == 0:
        break
    if pos_a[i] == pos_b[i] and pos_a[i-1] != pos_b[i-1]:
        cnt += 1
        #print(i, pos_a[i], pos_b[i],cnt)
print(cnt)