import sys

INT_MAX = sys.maxsize

n = int(input())
marathon_arr = [tuple(map(int, input().split())) for _ in range(n)]

answer = INT_MAX

for i in range(1,n-1):
    man_distance = 0
    minimun_arr = marathon_arr[:i] + marathon_arr[i+1:]

    for j in range(1, len(minimun_arr)):
        man_distance += abs(minimun_arr[j-1][0] - minimun_arr[j][0]) + abs(minimun_arr[j-1][1] - minimun_arr[j][1])
        #print(i,j,man_distance)
    
    answer = min(answer, man_distance)
    #print(answer)

print(answer)