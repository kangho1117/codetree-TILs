n = int(input())

arr = list(map(int, input().split()))

cnt = 0


for i in range(n):
    for j in range(i,n):
        sum_ij = sum(arr[i:j+1])
        mean = sum_ij / (j-i + 1)
        exist = False
        for k in range(i,j+1):
            
            # if j - i == 1 and arr[i] == arr[j]:
            #     continue
            #print(i,j,k, mean, arr[k])
            if mean == arr[k]:
                exist = True
        if exist:
            cnt += 1


print(cnt)