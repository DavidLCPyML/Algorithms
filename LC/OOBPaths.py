m,n, maxMove, startRow, startColumn = map(int, input().split())

dirs = [[0,1], [1,0], [0, -1], [-1, 0]]
MOD = int(1e9+7)

dp = dict()
def dfs(r,c, maxMove):
    if r < 0 or r == m or c < 0 or c == n: return 1
    if not maxMove: return 0
    key = (r, c, maxMove)
    if key in dp: return dp[key]

    ans = 0
    for dir in dirs:
        ans = (ans + dfs(r + dir[0], c + dir[1], maxMove-1)) % MOD
    dp[key] = ans
    return ans

print(dfs(startRow, startColumn, maxMove))