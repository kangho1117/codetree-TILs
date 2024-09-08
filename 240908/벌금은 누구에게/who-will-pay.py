n, m, k = map(int, input().split())

stu_arr = [0] * (n+1)

ans = -1
for i in range(m):
    num = int(input())
    stu_arr[num] += 1
    if stu_arr[num] >= k:
        ans = num
        break
print(ans)