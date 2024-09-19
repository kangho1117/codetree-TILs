n = int(input())

dx, dy = [1, 0 ,-1, 0], [0, -1, 0 ,1]

x, y = 0, 0

for i in range(n):
    dir, dis = input().split()
    dis = int(dis)
    for _ in range(dis):
        if dir == 'W':
            x += dx[2]
            y += dy[2]
        elif dir =='S':
            x += dx[1]
            y += dy[1]
        elif dir =='N':
            x += dx[3]
            y += dy[3]
        elif dir =='E':
            x += dx[0]
            y += dy[0]

print(x,y)