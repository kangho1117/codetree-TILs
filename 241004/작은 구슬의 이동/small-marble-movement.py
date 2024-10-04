n, t = map(int, input().split())

def in_range(x,y):
    return 1 <= x and x <= n and 1 <= y and y <= n

direct_dict = {
    'U' : 2,
    'D' : 1,
    'R' : 0,
    'L' : 3
}

r,c,d = input().split()
r,c = int(r), int(c)
dxs, dys = [0, 1, -1, 0], [1, 0, 0, -1]
direction = direct_dict[d]

for _ in range(t):
    if  not in_range(r + dxs[direction],c + dys[direction]):
        direction = 3 - direction
        continue
    r, c = r + dxs[direction],  c + dys[direction]

print(r,c)