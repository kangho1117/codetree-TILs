n = int(input())

arr_2d = [tuple(map(int, input().split())) for _ in range(n)]

cnt = 0

for i in range(1,10):
    for j in range(1,10):
        for k in range(1,10):
            if i == j or j == k or k == i:
                continue
            one_cnt = 0
            two_cnt = 0
            success = True
            for num, cnt1,cnt2 in arr_2d:
                a = num // 100
                b = num // 10 % 10
                c = num % 10
            
                if i == a or j == b or k == c:
                    one_cnt += 1
                elif i in num or j in num or k in num:
                    two_cnt += 1
            
                if one_cnt != cnt1 and two_cnt != cnt2:
                    success =False
            if success :
                cnt += 1

print(cnt)