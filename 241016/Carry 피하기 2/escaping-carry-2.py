n = int(input())

arr_num = [int(input()) for _ in range(n)]
answer = -1

for i in range(n):
    for j in range(i+1,n):
        for k in range(j+1, n):
            carry = False
            if arr_num[i] % 10 + arr_num[j] % 10 + arr_num[k] % 10 >= 10:
                carry = True

            if arr_num[i] % 100 // 10 + arr_num[j] % 100 // 10+ arr_num[k] % 100 // 10 >= 10:
                carry = True

            if arr_num[i] % 1000 // 100 + arr_num[j] % 1000 // 100 + arr_num[k] % 1000 // 100 >= 10:
                carry = True

            if arr_num[i] % 10000 // 1000 + arr_num[j] % 10000 // 1000 + arr_num[k] % 10000 // 1000 >= 10:
                carry = True

            if carry == False:
                answer = max(answer, arr_num[i] + arr_num[j] + arr_num[k])

print(answer)