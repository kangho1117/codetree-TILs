n  = int(input())

arr_2d = []
for _ in range(n):
    x1,x2 = map(int, input().split())
    arr_2d.append([(x1,0),(x2,1)])


arr_2d.sort()
answer = n

for i in range(n):
    for j in range(i+1,n):
        if arr_2d[i][1][0] >= arr_2d[j][1][0]:
            answer -= 2
            break

print(answer)