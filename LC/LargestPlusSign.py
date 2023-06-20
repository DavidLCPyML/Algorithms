# INPUT: n: int, mines: List[List[int]]

# dp = [[min(i, n-1-i, j, n-1-j) + 1 for j in range(n)] for i in range(n)]
# for (r, c) in mines:
#     for i in range(n):
#         dp[i][c] = min(dp[i][c], abs(i-r))
#         dp[r][i] = min(dp[r][i], abs(i-c))
# return max([max(r) for r in dp])

dp = [[n]*n for _ in range(n)]
for i in mines:
    dp[i[0]][i[1]] = 0

for i in range(n):
    l,r,u,d = (0,)*4
    for (j,k) in zip(range(n), reversed(range(n))):
        l = l+1 if dp[i][j] else 0
        dp[i][j] = min(dp[i][j], l)
        r = r+1 if dp[i][k] else 0
        dp[i][k] = min(dp[i][k], r)
        u = u+1 if dp[j][i] else 0
        dp[j][i] = min(dp[j][i], u)
        d = d+1 if dp[k][i] else 0
        dp[k][i] = min(dp[k][i], d)
return max([max(r) for r in dp])