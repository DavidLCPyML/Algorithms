import sys
input = sys.stdin.readline

n,m = map(int, input().split())
stage = []
for i in range(n):
    stage.append(list(map(int, input().split())))
ans = 0
dp = [[0 for _ in range(m)] for _ in range(n)]

for i in range(n):
    flag = False
    for j in range(m):
        flag |= stage[i][j]
        dp[i][j] += flag if not stage[i][j] else 0
    flag = False
    for j in range(m-1, -1, -1):
        flag |= stage[i][j]
        dp[i][j] += flag if not stage[i][j] else 0
for j in range(m):
    flag = False
    for i in range(n):
        flag |= stage[i][j]
        dp[i][j] += flag if not stage[i][j] else 0
    flag = False
    for i in range(n-1, -1, -1):
        flag |= stage[i][j]
        dp[i][j] += flag if not stage[i][j] else 0

for row in dp:
    ans += sum(row)
# print(dp)
print(ans)