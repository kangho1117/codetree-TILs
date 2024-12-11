n = int(input())

seat = list(input())

def min_dist():
    dist = n
    for i in range(n):
        for j in range(i+1, n):
            if seat[i] == '1' and seat[j] == '1':
                dist = min(dist, j - i)
    return dist


answer = 0

for i in range(n):
    if seat[i] == '0':
        seat[i] = '1'
        answer = max(answer , min_dist())

        seat[i] = '0'

print(answer)