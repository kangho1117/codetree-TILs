# arr = list(input())

# n = len(arr)
# for i in range(n):
#     arr[i] = int(arr[i])

# for i in range(n):

#     if arr[i] == 0:
#         arr[i] = 1
#         break
#     if i == n - 1:
#         arr[i] = 0

# answer = 0
# for i in range(n-1,-1,-1):
#     if arr[-i] == 0 and len(arr) == 1:
#         break
#     if arr[-i-1] == 0:
#         continue
#     answer += 2**(arr[-i-1]*i)
# print(answer) 

import sys

INT_MIN = -sys.maxsize

# 변수 선언 및 입력
binary = list(map(int, list(input())))
length = len(binary)

# 각 i번째 자릿수를 바꾸었을 때의 십진수 값을 구해줍니다.
ans = INT_MIN
for i in range(length):
	# i번째 자릿수를 바꿉니다.
	binary[i] = 1 - binary[i]
	
	# 십진수로 변환합니다.
	num = 0
	for j in range(length):
		num = num * 2 + binary[j]
	
	ans = max(ans, num)
	
	# i번째 자릿수를 원래대로 돌려놓습니다.
	binary[i] = 1 - binary[i]

# 출력
print(ans)