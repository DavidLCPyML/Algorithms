m, n = len(grid), len(grid[0])
dp = grid.copy()
for i in range(1, len(dp)):
    dp[i][0] = dp[i-1][0] + dp[i][0]
for i in range(1, len(dp[0])):
    dp[0][i] = dp[0][i-1] + dp[0][i]
for i in range(m):
    for j in range(n):
        dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + dp[i][j]
print(*dp,sep = '\n')
print(dp[-1][-1])