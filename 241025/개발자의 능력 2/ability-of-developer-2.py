import sys
INT_MAX = sys.maxsize
n = 6
arr = list(map(int, input().split()))

# arr.sort()

# team1 = arr[0] + arr[-1]
# team2 = arr[1] + arr[-2]
# team3 = arr[2] + arr[-3]

# team_max = max(team1, team2, team3)

# team_min = min(team1, team2, team3)

# print(team_max - team_min)

def diff(i,j,k,l):
    sum1 = arr[i] + arr[j]
    sum2 = arr[k] + arr[l]

    sum3 = sum(arr) - sum1 - sum2

    ret = abs(sum1 - sum2)
    ret = max(ret, abs(sum2 - sum3))
    ret = max(ret, abs(sum3 - sum1))
    return ret

min_diff = INT_MAX

for i in range(n):
    for j in range(i +1, n):

        for k in range(n):
            for l in range(k+1,n):
                if k == i or k == j or l == i or l == j:
                    continue
                min_diff = min(min_diff, diff(i,j,k,l))

print(min_diff)