n = int(input())

arr_2d = [tuple(map(int, input().split())) for _ in range(n)]

cnt = 0

for i in range(1,10):
    for j in range(1,10):
        for k in range(1,10):
            if i == j or j == k or k == i:
                continue
            success = True
            for num, cnt1,cnt2 in arr_2d:

                one_cnt = 0
                two_cnt = 0
                a = num // 100
                b = num // 10 % 10
                c = num % 10
                #print(a,b,c)
            
                # if a == i or b == j or c == k:
                #     one_cnt += 1
                if a == i:
                    one_cnt += 1
                if b == j:
                    one_cnt += 1                    
                if c == k:
                    one_cnt += 1
                if (i != a and i in (a,b,c)) or (j != b and  j in (a,b,c)) or (k != c and k in (a,b,c)):
                    two_cnt += 1
                # if a == j or a == k:
                #     two_cnt += 1
                # if b == i or b == k:
                #     two_cnt += 1
                # if c == i or c == j:
                #     two_cnt += 1
            
                if one_cnt != cnt1 or two_cnt != cnt2:
                    success =False
                    break
            if success :
                cnt += 1

print(cnt)