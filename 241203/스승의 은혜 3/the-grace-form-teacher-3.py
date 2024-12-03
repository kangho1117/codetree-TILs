n, m = map(int, input().split())

student_arr = [list(map(int ,input().split())) for _ in range(n)]
answer = 0
for i in range(n):
    dicount = student_arr[i][0] // 2
    sum_stu = dicount + student_arr[i][1]
    stu_cnt = 1
    for j in range(n):
        if j == i :
            continue
        sum_stu += (student_arr[j][0] + student_arr[j][1])
        if m - sum_stu >= 0:
            stu_cnt += 1
            #print(i,j,stu_cnt,answer)
        else :
            break
    answer = max(answer, stu_cnt)


print(answer)