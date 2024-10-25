arr = list(map(int, input().split()))

# abil_num = [0] * 1000001

# for i in range(6):
#     abil_num[arr[i]] = 1

arr.sort()
#print(arr)
team1 = arr[0] + arr[-1]
team2 = arr[1] + arr[-2]
team3 = arr[2] + arr[-3]
#print(team1, team2, team3)
team_max = max(team1, team2, team3)

team_min = min(team1, team2, team3)

print(team_max - team_min)