x, y = 0, 0
dx, dy = [0,1,0,-1], [1,0,-1,0]
move_dir = 0

dir_list = list(input())

for i in range(len(dir_list)):

    if dir_list[i] == 'L':
        move_dir = (move_dir - 1 + 4) % 4
    elif dir_list[i] == 'R':
        move_dir = (move_dir + 1) % 4
    elif dir_list[i] == 'F':
    
        x, y = x + dx[move_dir], y + dy[move_dir]
    
print(x,y)