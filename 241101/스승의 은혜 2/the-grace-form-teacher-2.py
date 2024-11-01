n, b = map(int, input().split())

arr = [int(input()) for _ in range(n)]
arr.sort()

answer = 0
for i in range(n):
    money_sum = arr[i]
    for j in range(n):
        if i == j :
            continue
        if  money_sum + arr[j] <= 18:
            money_sum += arr[j]
        else :
            answer = j+1

print(answer)