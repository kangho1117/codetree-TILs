n = int(input())

arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

cnt = 0
for i in range(1,n+1):
    for j in range(1,n+1):
        for k in range(1,n+1):
            if (abs(i - arr1[0]) <= 2 or abs(i - arr1[0]) >= n-2) and (abs(j - arr1[1]) <= 2 or abs(j - arr1[1]) >= n-2) and (abs(k - arr1[2]) <= 2 or abs(k - arr1[2]) >= n-2):
                cnt += 1
            
            elif (abs(i - arr2[0]) <= 2 or abs(i - arr2[0]) >= n-2) and (abs(j - arr2[1]) <= 2 or abs(j - arr2[1]) >= n-2) and (abs(k - arr2[2]) <= 2 or abs(k - arr2[2]) >= n-2):
                cnt += 1

print(cnt)