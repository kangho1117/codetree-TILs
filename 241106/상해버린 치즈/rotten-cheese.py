n, m, d, s = tuple(map(int, input().split()))

#arr_d p : 몇번째 사람  m : 몇번쨰 치즈 t : 언제 먹었는지(초)
arr_d = [list(map(int, input().split())) for _ in range(d)]

#arr_s p 몇번째 사람 # t 언제 아팠는지(초)
arr_s = [list(map(int, input().split())) for _ in range(s)]

answer = 0
for i in range(1, m+1):

    time = [0] * (n+1)

    for arr in arr_d:
        if arr[1] != i:
            continue
        
        #처음먹었거나 이전보다 빨리먹었을때 기록
        person = arr[0]
        if time[person] == 0:
            time[person] = arr[2]
        elif time[person] > arr[2]:
            time[person] = arr[2]
    
    possible = True

    for arr in arr_s:
        person = arr[0]
        if time[person] == 0:
            possible = False
        if time[person] >= arr[1]:
            possible = False
    
    pill = 0
    if possible:
        for j in range(1, n+1):
            if time[j] != 0:
                pill += 1
    answer = max(answer, pill)

print(answer)