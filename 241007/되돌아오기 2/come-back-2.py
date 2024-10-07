x, y = 0, 0

dx,dy = [0,1,0,-1], [1,0,-1,0]

direc_num = 0


input_char = list(input())
answer = -1
time = 0
for i in range(len(input_char)):
    time += 1
    if input_char[i] == 'L':
        direc_num = (direc_num + 4 - 1) % 4
    elif input_char[i] == 'R':
        direc_num = (direc_num + 1) % 4
    elif input_char[i] == 'F':
        x,y = x + dx[direc_num], y + dy[direc_num]
    
    if x == 0 and y == 0:
        answer = time
        break

print(answer)