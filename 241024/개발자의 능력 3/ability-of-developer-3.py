import sys
max_val = sys.maxsize

arr = list(map(int, input().split()))
min_diff = max_val
for i in range(6):
    for j in range(i+1,6):
        for k in range(j+1,6):
            sum1 = arr[i] + arr[j] + arr[k]
            sum2 = sum(arr) - sum1
            diff = abs(sum1 - sum2)
            min_diff = min(min_diff, diff)

print(min_diff)