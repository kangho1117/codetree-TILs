MAX_T = 1000
n, c, g, h = tuple(map(int, input().split()))


temper_arr= [list(map(int, input().split())) for _ in range(n)]

def single_efficiency(low, high, t):
    if t < low:
        return c
    elif t<= high:
        return g
    else:
        return h

def high_perfomance(t):
    total_efficiency = 0

    for i in range(n):
        total_efficiency += single_efficiency(temper_arr[i][0], temper_arr[i][1], t)
    return total_efficiency

max_out = 0

for t in range(MAX_T):
    max_out = max(max_out, high_perfomance(t))

print(max_out)