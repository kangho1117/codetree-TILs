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
#print(arr[-7])
for i in range(n-1,-1,-1):
    if arr[-i] == 0 and len(arr) == 1:
        break
    if arr[-i-1] == 0:
        continue
    answer += 2**(arr[-i-1]*i)
    #print(i,arr[-i-1]*i,answer)

print(answer)