x,y = map(int, input().split())

cnt = 0
for i in range(x,y+1):
    num = i
    digit = [0] * 10
    all_digits = 0

    while(num):
        digit[num % 10] += 1
        all_digits += 1
        num //= 10
    interesting = False

    for j in range(10):
        if digit[j] == all_digits - 1:
            interesting = True
    if interesting:
        cnt += 1

print(cnt)