n = int(input())


com_arr = [list(map(int, input().split())) for _ in range(n)]

answer = 0
for i in range(1,4):
    yabawi = [0] * 4
    yabawi[i] = 1
    cnt = 0
    for j in range(n):
        a,b,c = tuple(com_arr[j])
        
        temp = yabawi[a]
        yabawi[a] = yabawi[b]
        yabawi[b] = temp
        
        if yabawi[c] == 1:
            cnt += 1
        #print(a,b,c,yabawi,cnt,answer)
    
    
    answer = max(answer, cnt)

print(answer)
