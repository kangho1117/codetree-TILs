arr_C = list(input())

cnt = 0
for i in range(1, len(arr_C)):
    if arr_C[i-1] =='(' and arr_C[i] == '(':
        #print(i-1,arr_C[i-1], i, arr_C[i])
        for j in range(i+2, len(arr_C)):
            #print(j-1,arr_C[j-1], j, arr_C[j])
            if arr_C[j-1] == ')' and arr_C[j] ==')':
                cnt += 1

print(cnt)