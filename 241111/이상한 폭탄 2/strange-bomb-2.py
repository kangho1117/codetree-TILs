n, k = map(int, input().split())

bomb_arr = [int(input()) for _ in range(n)]

answer = -1
for i in range(n):
    for j in range(n):
        if i == j:
            continue
        if bomb_arr[i] == bomb_arr[j] and abs(i - j) <= k:
            answer = max(answer, bomb_arr[i])

print(answer)