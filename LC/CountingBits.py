n = int(input())

dp = [0 for i in range(n+1)]
dp[1] = 1
for i in range(1, n+1):
    dp[i] = dp[i//2] + (i % 2)
print(dp)