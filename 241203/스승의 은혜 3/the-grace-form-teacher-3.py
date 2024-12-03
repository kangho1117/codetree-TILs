n, m = map(int, input().split())

student_arr = [list(map(int ,input().split())) for _ in range(n)]
answer = 0
student_arr.sort(key = lambda x : (x[0] + x[1]))
#print(student_arr)
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
        else :
            break
    #print(i+1,j+1,sum_stu,stu_cnt,answer)
    answer = max(answer, stu_cnt)
    


print(answer)