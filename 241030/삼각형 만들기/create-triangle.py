n = int(input())

arr_2d = [tuple(map(int, input().split())) for _ in range(n)]


answer = 0
for i in range(n):
    for j in range(i+1,n):
        for k in range(j+1,n):
            x1,y1 = arr_2d[i]
            x2,y2 = arr_2d[j]
            x3,y3 = arr_2d[k]
            if (x1 == x3 or x2 == x3 or x1 == x2) and (y1 == y2 or y2 == y3 or y1 == y3):
                length = max(y1,y2,y3) - min(y1,y2,y3)
                rect = max(x1,x2,x3) - min(x1,x2,x3)
                area = length * rect
                answer = max(answer, area)
                #print(x1,y1,x2,y2,x3,y3,area,answer)
print(answer)