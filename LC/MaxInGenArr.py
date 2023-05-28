n = int(input())

dp = [0 for i in range(n+1)]
if n == 0:
    print(0)
elif n == 1:
    print(1)
dp[1] = 1
ans = -1
for i in range(n+1):
    if i % 2:
        dp[i] = dp[i//2 + 1] + dp[i//2]
    else:
        dp[i] = dp[i//2]
    ans = max(ans, dp[i])

print(dp)