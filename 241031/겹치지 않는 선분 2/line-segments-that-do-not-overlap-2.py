n  = int(input())

arr_2d = []
for _ in range(n):
    x1,x2 = map(int, input().split())
    arr_2d.append([(x1,0),(x2,1)])


arr_2d.sort()
answer = n

for i in range(n):
    ol_cnt = 0
    for j in range(i+1,n):
        if answer == 0:
            break
        if arr_2d[i][1][0] >= arr_2d[j][1][0]:
            
            if ol_cnt == 0 and answer >= 2:
                answer -= 2
                ol_cnt += 1
            else :
                answer -= 1
            #print(i,j,arr_2d[i],arr_2d[j],ol_cnt,answer)
            continue

print(answer)