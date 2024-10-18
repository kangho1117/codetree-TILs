n,s = map(int, input().split())

arr = list(map(int, input().split()))

answer = 0
for i in range(n):
    for j in range(i+1,n):
        minus_arr = arr[:i] + arr[i+1:j] + arr[j+1:]
        #print(i,j,minus_arr)
        
        # for k in range(len(minus_arr)):
        #     plus += minus_arr[k]
        plus = sum(minus_arr)
        #print(answer, plus)

        if abs(s - answer) >= abs(s - plus):
            answer = plus

print(abs(answer - s))