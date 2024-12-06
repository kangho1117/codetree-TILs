x, y = map(int, input().split())

cnt = 0
for num in range(x, y+1):
    xy_arr = list(map(int, str(num)))
    pallin_tf = True
    for i in range(0, len(xy_arr) // 2):
        #print(i,xy_arr[i],xy_arr[-(i+1)])
        if xy_arr[i] == xy_arr[-(i+1)]:
            continue
        else:
            pallin_tf = False
    if pallin_tf:
        cnt += 1
print(cnt)

        

    