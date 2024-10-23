n,h,t = map(int, input().split())

bart = list(map(int, input().split()))

min_cost = 100000
for i in range(n):
    if i+t < n:
        arr = bart.copy()
        cost = 0
        for j in range(i,i+t):
            #print(j)
            while 1:
                #print(arr[j],t,cost)
                if arr[j] < t:
                    arr[j] += 1
                    cost += 1
                elif arr[j] > t:
                    arr[j] -= 1
                    cost += 1
                else :
                    break
    
        min_cost = min(min_cost, cost)

print(min_cost)