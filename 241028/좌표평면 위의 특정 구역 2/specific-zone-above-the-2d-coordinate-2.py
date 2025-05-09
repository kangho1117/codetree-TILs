import sys
INT_MAX = sys.maxsize
n = int(input())

arr_2d = [tuple(map(int, input().split())) for _ in range(n)]

min_area = INT_MAX
for i in range(n):
    area = 0

    x_list = []
    y_list = []

    for j in range(n):
        if i == j:
            continue
        x, y= arr_2d[j]
        x_list.append(x)
        y_list.append(y)
    
    area = (max(x_list) - min(x_list)) * (max(y_list) - min(y_list))
    min_area = min(min_area, area)
    #print(x_list,y_list,area,min_area)

print(min_area)