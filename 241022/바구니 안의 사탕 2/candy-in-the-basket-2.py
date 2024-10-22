n,k = map(int,input().split())

bucket = [0] * 101

for i in range(n):
    candy,cordinate = map(int,input().split())
    bucket[cordinate] = candy

max_cnt = 0
for c in range(k,len(bucket)-k):
    cndy = sum(bucket[c-k:c+k+1])
    max_cnt = max(max_cnt, cndy)

print(max_cnt)