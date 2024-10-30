import sys
n = int(input())

arr_2d = [tuple(map(int, input().split())) for _ in range(n)]


answer = - sys.maxsize
for i in range(n):
    time_arr = [0] * 25
    time = 0
    for j in range(n):
        if i == j:
            continue
        for k in range(arr_2d[j][0], arr_2d[j][1]):
            time_arr[k] = 1
    #print(i,time_arr)
        
    for i in range(len(time_arr)):
        if time_arr[i] != 0:
            time += 1
    answer = max(answer, time)

print(answer)