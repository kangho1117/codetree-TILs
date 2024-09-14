Max_T = 1000
N, M = map(int, input().split())

pos_a, pos_b = [0] * (Max_T + 1 ),[0] * (Max_T + 1 ) 

time_a = 1
for _ in range(N):
    v, t = map(int, input().split())

    for _ in range(t):
        pos_a[time_a] = pos_a[time_a - 1] + v
        time_a += 1

time_b = 1
for _ in range(M):
    v, t = map(int, input().split())

    for _ in range(t):
        pos_b[time_b] = pos_b[time_b - 1] + v
        time_b += 1


leader, answer = 0, 0
for i in range(1, time_a):
    #print(i, pos_a[i], pos_b[i])
    if pos_a[i] > pos_b[i]:

        if leader == 2 or leader == 0:
            answer += 1
            #print(i, pos_a[i], pos_b[i], answer)
        leader = 1
    elif pos_a[i] < pos_b[i]:

        if leader == 1 or leader == 0:
            answer += 1
            #print(i, pos_a[i], pos_b[i], answer)
        leader = 2
    else :
        if leader == 1 or leader == 2:
            answer += 1
            #print(i, pos_a[i], pos_b[i], answer)
        leader = 0
print(answer)