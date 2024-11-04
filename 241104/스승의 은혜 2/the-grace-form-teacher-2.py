n, b = map(int, input().split())

arr = [int(input()) for _ in range(n)]
arr.sort()
answer = 1
for i in range(n):
    money_sum = arr[i] / 2
    for j in range(n):
        if i == j :
            continue
        if  money_sum + arr[j] <= 18:
            money_sum += arr[j]
            answer = max(answer, j+1)
            #print(money_sum,answer)
        else :
            break

print(answer)