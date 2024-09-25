n = int(input())

x,y = 0,0

dir_dict = {'E':0, 'S':1, 'W':2, 'N':3}
dx,dy = [1,0,-1,0],[0,-1,0,1]

answer = -1
t = 0
for _ in range(n):
    dir, dist = input().split()
    move_dir = dir_dict[dir]
    for i in range(int(dist)):
        x,y = x + dx[move_dir], y + dy[move_dir]
        t += 1
        if  x == 0 and y == 0:
            answer = t
        
    
print(answer)