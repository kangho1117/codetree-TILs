arr = list(input())

n = len(arr)
for i in range(n):
    arr[i] = int(arr[i])

for i in range(n):
    #print(i, arr[i])

    if arr[i] == 0:
        arr[i] = 1
        #print(i,arr)
        break
    if i == n - 1:
        arr[i] = 0

answer = 0
for i in range(n-1,-1,-1):
    if arr[i] == 0 and len(arr) == 1:
        break
    
    answer += 2**(arr[-i]*i)
    #print(i,arr[-i]*i,answer)

print(answer)