n = int(input())

arr = list(input())
cnt = 0
for i in range(n):
    #print(i)
    if arr[i] == 'C':
        for j in range(i+1,n):
            #print(i, j)
            if arr[j] == 'O':
                for k in range(j+1,n):
                    #print(i,j,k)
                    if arr[k] =='W':
                        cnt += 1
                        #print(i,j,k,cnt)

print(cnt)