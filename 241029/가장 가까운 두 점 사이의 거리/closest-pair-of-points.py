import sys

n = int(input())

arr_2d = [tuple(map(int, input().split())) for _ in range(n)]

answer = sys.maxsize
for i in range(n):
    square = 0
    for j in range(i+1, n):
        x1, y1 = arr_2d[i]
        x2, y2 = arr_2d[j]
        square = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)
        answer = min(answer,square)

print(answer)