arr_C = list(input())


cnt = 0
for i in range(len(arr_C)):
    for j in range(i+1,len(arr_C)):
        if arr_C[i] == '(' and arr_C[j] == ')':
            cnt += 1
print(cnt)