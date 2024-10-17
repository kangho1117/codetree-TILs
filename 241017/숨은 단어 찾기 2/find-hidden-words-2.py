n,m = map(int, input().split())

arr_2d = [list(input()) for _ in range(n)]
#print(arr_2d)
def in_range(x,y):
    return 0 <= x and x < n and 0 <= y and y < m

dxs, dys = [-1,-1,-1,0,0,1,1,1], [-1,0,1,-1,1,-1,0,1]

cnt = 0

for i in range(n):
    for j in range(m):

        if arr_2d[i][j] == 'L':
            #print(i,j,arr_2d[i][j])

            for mx, my in zip(dxs, dys):
                cout_x = i
                cout_y = j
                lee_cnt = 1
                for _ in range(2):
                    dx = cout_x + mx
                    dy = cout_y + my
                    if not in_range(dx,dy):
                        break
                    
                    if arr_2d[dx][dy] != 'E':
                        break
                    cout_x = dx
                    cout_y = dy
                    lee_cnt += 1
                    #print(dx,dy,arr_2d[dx][dy],lee_cnt)
                
                if lee_cnt == 3:
                    cnt += 1

print(cnt)