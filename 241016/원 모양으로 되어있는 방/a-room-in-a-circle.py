import sys

INT_MAX = sys.maxsize

n = int(input())

arr = [int(input()) for _ in range(n)]

min_dist = INT_MAX
for i in range(n):
    distance = 0
    for j in range(n):
        distance += arr[j - i] * j
    min_dist = min(min_dist, distance)
print(min_dist)