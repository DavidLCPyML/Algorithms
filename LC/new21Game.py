n,k,w = map(int, input().split())

dp = [0 for _ in range(n + 1)]
dp[0] = 1

ans, x = 0.0, dp[0]
for i in range(1, n+1):
    dp[i] = x/w
    if i < k:
        x += dp[i]
    else:
        ans += dp[i]
    if i >= w:
        x -= dp[i-w]

    if i >= k:
        print(x)

print(*dp)
print(ans)