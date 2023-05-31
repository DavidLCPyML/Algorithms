n = int(input())

dp = [[0 for _ in range(n+1)] for _ in range(n+1)]
for l in range(n, 0, -1):
    for r in range(l+1, n+1):
        dp[l][r] = float('inf')
        for k in range(l, r):
            choice = max(dp[l][k-1], dp[k+1][r])
            dp[l][r] = min(dp[l][r], k + choice)

print(dp[1][n])
# print(*dp, sep = '\n')