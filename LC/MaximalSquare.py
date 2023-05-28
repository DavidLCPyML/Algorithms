matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]


m = len(matrix)
n = len(matrix[0])

dp = [[0 for _ in range(n+1)] for _ in range(m+1)]
ans = 0

dp[0][0] = 1 if matrix[0][0] == '1' else 0

for i in range(m):
    for j in range(n):
        if matrix[i][j] == '1':
            dp[i+1][j+1] = min(dp[i][j], dp[i][j+1], dp[i+1][j]) + 1
        ans = max(ans, dp[i+1][j+1])

print(*dp, sep = '\n')

print(ans**2)