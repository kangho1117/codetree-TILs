x, y = 0, 0

n = int(input())

direction_dict = {
    'E':0,
    'S':1,
    'W':2,
    'N':3
}

dx, dy = [1, 0 ,-1, 0], [0, -1, 0, 1]

answer = -1
time = 0

for _ in range(n):
    dir_C, distance = input().split()
    dir = direction_dict[dir_C]
    distance = int(distance)
    for _ in range(distance):
        time += 1
        x,y = x + dx[dir], y + dy[dir]
        if x == 0 and y == 0:
            answer = time
print(answer)