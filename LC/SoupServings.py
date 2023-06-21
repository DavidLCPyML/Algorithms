n = int(input())

if n >= 4500: 
    print(1.0); exit()

dp = dict()
def dfs(a, b):
    if a <= 0 and b <= 0: return 0.5
    if a <= 0: return 1
    if b <= 0: return 0
    key = (a,b)
    if key in dp:
        return dp[key]
    dp[key] = 0.25 * dfs(a-100, b) + 0.25 * dfs(a-75, b-25) + 0.25*dfs(a-50, b-50) + 0.25*dfs(a-25, b-75)
    return dp[key]

print(dfs(n, n))