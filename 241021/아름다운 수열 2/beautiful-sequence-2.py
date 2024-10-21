n, m = map(int,input().split())

n_arr = list(map(int,input().split()))
m_arr = list(map(int,input().split()))

answer = 0
for i in range(n):
    if i + m <= n:
        b_cnt = 0
        cp_m_arr = m_arr.copy()
        for j in range(i, i+m):
            #print(i,j,n_arr[j],cp_m_arr,b_cnt,answer)
            if n_arr[j] in cp_m_arr:
                b_cnt += 1
                cp_m_arr.remove(n_arr[j])
        if b_cnt == m:
            answer += 1

print(answer)