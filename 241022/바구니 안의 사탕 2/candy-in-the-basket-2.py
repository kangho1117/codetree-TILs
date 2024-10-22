n,k = map(int,input().split())

bucket = [0] * 101

for i in range(n):
    candy,cordinate = map(int,input().split())
    bucket[cordinate] += candy
#print(bucket)

max_cnt = 0
#print(k+1,len(bucket)-k)
for i in range(len(bucket)):
    c = i + k
    cndy = sum(bucket[c-k:c+k+1])
    #cndy = 0
    #print(c,cndy, max_cnt)
    # for j in range(c-k, c+k+1):
    #     cndy += bucket[j]
    #print(c,cndy, max_cnt)    
    max_cnt = max(max_cnt, cndy)

print(max_cnt)