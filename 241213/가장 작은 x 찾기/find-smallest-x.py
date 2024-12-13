n = int(input())

arr = [list(map(int, input().split())) for _ in range(n)]

import sys
int_max = sys.maxsize
answer = int_max
for x in range(arr[0][0], arr[0][1]):
    a = x
    tf_x = True
    for i in range(n):
        if arr[i][0] <= a*2 and a*2 <= arr[i][1]:
            a *= 2
        else :
            tf_x = False
            break
    if tf_x:
          answer = min(answer, x)   

print(answer)

        
