max_loc = 100
n = int(input())

arr = [0] * (max_loc + 1)

for _ in range(n):
    x, a = input().split()
    arr[int(x)] = a

max_size = 0
for i in range(1,max_loc+1):
    
    for j in range(i+1 ,max_loc+1):
        h_cnt,g_cnt = 0,0
        hg_size = 0
        
        for k in range(i,j+1):
            if arr[k] == 'H':
                h_cnt += 1
            elif arr[k] == 'G':
                g_cnt += 1
            else :
                continue        

        if  h_cnt == 0 or g_cnt == 0:
            if arr[i] != 0 and arr[j] != 0:
                hg_size = j-i
                #print('구간은 ',i,j,h_cnt,g_cnt,'사진 크기',hg_size,'최대크기',max_size)
                max_size = max(max_size, hg_size)
                
        if h_cnt == g_cnt:
            if arr[i] != 0 and arr[j] != 0:
                hg_size = j-i
                #print('구간은 ',i,j,h_cnt,g_cnt,'사진 크기',hg_size,'최대크기',max_size)            
                max_size = max(max_size, hg_size)
            

print(max_size)