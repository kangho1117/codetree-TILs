n,k = map(int,input().split())

bucket = [0] * 102

for i in range(n):
    candy,cordinate = map(int,input().split())
    bucket[cordinate] += candy
#print(bucket)
max_cnt = 0

for c in range(k+1,len(bucket)-k):
    #cndy = sum(bucket[c-k:c+k+1])
    cndy = 0
    for j in range(c-k, c+k+1):
        cndy += bucket[j]
    #print(c,cndy, max_cnt)    
    max_cnt = max(max_cnt, cndy)

print(max_cnt)