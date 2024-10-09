import sys

INT_MAX = sys.maxsize
INT_MIN = -sys.maxsize

n = int(input())


arr = list(map(int, input().split()))

min_val = INT_MAX
for i in range(n):
    sum_cnt = 0
    for j in range(n):
        sum_cnt += abs(i - j) * arr[j]
    if min_val > sum_cnt:
        min_val = sum_cnt
print(min_val)