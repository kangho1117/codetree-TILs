n, m = map(int, input().split())
A_lst = []
A_cnt = 0
B_lst = []
B_cnt = 0
for _ in range(n):
    dir, dis = input().split()
    dis = int(dis)
    if dir == 'L':
        for j in range(dis):
            A_cnt -= 1
            A_lst.append(A_cnt)
    else :
        for j in range(dis):
            A_cnt += 1
            A_lst.append(A_cnt)

for _ in range(m):
    dir, dis = input().split()
    dis = int(dis)
    if dir == 'L':
        for j in range(dis):
            B_cnt -= 1
            B_lst.append(B_cnt)
    else :
        for j in range(dis):
            B_cnt += 1
            B_lst.append(B_cnt)

for i in range(len(A_lst)):
    if A_lst[i] == B_lst[i]:
        print(i+1)
        break
    if i == len(A_lst) - 1:
        print(-1)