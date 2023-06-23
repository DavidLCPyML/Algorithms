n,k,maxPts = map(int, input().split())

dp = [1]+[0]*n

x = dp[0]
for i in range(1, n+1):
    dp[i] = x / maxPts
    if i < k:
        x += dp[i]
    if i >= maxPts:
        x -= dp[i-maxPts]

print(*dp)
print(sum(dp[k:]))