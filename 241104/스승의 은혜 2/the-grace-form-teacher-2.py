n, b = map(int, input().split())

arr = [int(input()) for _ in range(n)]
arr.sort()
#print(arr)
answer = 1
for i in range(n):
    money_sum = arr[i] / 2
    student = 1
    for j in range(n):
        if i == j :
            continue
        if  money_sum + arr[j] <= b:
            student += 1
            money_sum += arr[j]
            answer = max(answer, student)
            #print(money_sum,answer)
        else :
            break

print(answer)