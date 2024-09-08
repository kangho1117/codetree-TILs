MAX_T = 1000000
n, m = map(int, input().split())

A_dist, B_dist = [0] * (MAX_T + 1), [0] * (MAX_T + 1)

A_d = 0
A_t = 0
B_d = 0
B_t = 0
for _ in range(n):
    v, t = map(int, input().split())
    for i in range(t):
        A_d += v
        A_t += 1
        A_dist[A_t] = A_d

for _ in range(m):
    v, t = map(int, input().split())
    for i in range(t):
        B_d += v
        B_t += 1
        B_dist[B_t] = B_d

# for i in range(10):
#     print( A_dist[i], B_dist[i])
lead = 0
leader = 0
for i in range(1, len(A_dist)):
    if A_dist[i] < B_dist[i]:
        if leader == 0:
            leader = 'B'
        if leader =='A':
            lead += 1
            leader = 'B'
        #print(i, lead, leader,A_dist[i], B_dist[i])
    elif A_dist[i] > B_dist[i]:
        if leader == 0:
            leader = 'A'
        if leader =='B':
            lead += 1
            leader = 'A'
        #print(i, lead, leader,A_dist[i], B_dist[i])

print(lead)