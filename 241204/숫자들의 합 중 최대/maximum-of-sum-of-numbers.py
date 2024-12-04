x, y = map(int ,input().split())

answer = 0
for i in range(x,y+1):
    num_sum = 0
    while True:
        if i >= 1000:
            num_sum += i // 1000
            i = i % 1000
        elif i >= 100:
            num_sum += i // 100
            i = i % 100
        elif i >= 10:
            num_sum += i // 10
            i = i % 10
        else:
            num_sum += i
            break
    answer = max(answer, num_sum)

print(answer)




