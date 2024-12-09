import sys
n = int(input())

elem_arr = list(map(int, input().split()))
max_diff = sys.maxsize
for i in range(n):
    elem_arr[i] *= 2

    for j in range(n):
        remain_arr = [elem for k, elem in enumerate(elem_arr) if k != j]

        sum_diff = 0
        for k in range(n-2):
            sum_diff += abs(remain_arr[k+1] - remain_arr[k])
        
        max_diff = min(max_diff, sum_diff)
    elem_arr[i] //= 2
    
print(max_diff)
        
        