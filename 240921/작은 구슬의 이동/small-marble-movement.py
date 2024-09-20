n, t = map(int,input().split())

r,c,d = input().split()
r, c = int(r), int(c)

dir_dict = {'R':0, 'D':1,'U':2, 'L':3,}
move_dir = dir_dict[d]
dx,dy = [0, 1, -1, 0], [1, 0, 0, -1]

def in_range(x,y):
    return 1 <= x and x < n+1 and 1 <= y and y < n+1

for i in range(1, t+1):

    if not in_range(r + dx[move_dir],c + dy[move_dir]):
        move_dir = 3 - move_dir

        continue
    r, c = r + dx[move_dir], c + dy[move_dir]

print(r,c)