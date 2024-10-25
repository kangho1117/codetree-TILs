import sys

INT_MAX = sys.maxsize
n = 5
arr = list(map(int, input().split()))

def diff(i,j,k,l):
    sum1 = arr[i] + arr[j]
    sum2 = arr[k] + arr[l]
    sum3 = sum(arr) - sum1 - sum2

    ret = abs(sum1 - sum2)
    ret = max(ret,abs(sum2-sum3))
    ret = max(ret, abs(sum3 - sum1))
    return ret

min_abil = INT_MAX

for i in range(n):
    for j in range(i+1,n):
        for k in range(n):
            for l in range(k+1,n):
                if k == i or k == j or l == i or l == j:
                    continue
                sum1 = arr[i] + arr[j]
                sum2 = arr[k] + arr[l]
                sum3 = sum(arr) - sum1 - sum2
                #print(sum1,sum2,sum3)
                if sum1 == sum2 or sum2 == sum3 or sum1 == sum3:
                    continue
                ret = max(sum1,sum2,sum3) - min(sum1,sum2,sum3)
                #print(ret)
                min_abil = min(min_abil,ret)
if min_abil == INT_MAX:
    min_abil = -1

print(min_abil)