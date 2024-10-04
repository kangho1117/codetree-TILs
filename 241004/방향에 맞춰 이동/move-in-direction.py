n = int(input())
x, y = 0, 0
direction_dict = {'N':0, 'E':1, 'S':2, 'W':3}
dx, dy = [0,1,0,-1], [1, 0, -1, 0]

for _ in range(n):
    dir, dist = input().split()
    direction = direction_dict[dir]
    x = x + dx[direction] * int(dist)
    y = y + dy[direction] * int(dist)
print(x,y)