import sys

INT_MIN = - sys.maxsize
n = int(input())

arr = list(map(int, input().split()))

answer = INT_MIN
for i in range(n):
    sum = 0
    for j in range(i+2,n):
        sum = arr[i] + arr[j]
    answer = max(answer, sum)
print(answer)