MAX_T = 1000000
n, m = map(int, input().split())

A_dist, B_dist = [0] * (MAX_T + 1), [0] * (MAX_T + 1)

A_d = 0
B_d = 0
for _ in range(n):
    v, t = map(int, input().split())
    for i in range(t):
        A_d += v
        A_dist[i+1] = A_d

for _ in range(m):
    v, t = map(int, input().split())
    for i in range(t):
        B_d += v
        B_dist[i+1] = B_d

lead = 0
leader = 'A'
if A_dist[1] > B_dist[1]:
    leader = 'A'
elif A_dist[1] > B_dist[1]:
    leader = 'B'

for i in range(2, len(A_dist)):
    if leader == 'A':
        if A_dist[i] < B_dist[i]:
            lead += 1
            leader = 'B'
    else :
        if A_dist[i] > B_dist[i]:
            lead += 1
            leader = 'A'

print(lead)