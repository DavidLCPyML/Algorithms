n = int(input())

MOD = int(1e9+7)
dp = [0,1,2,5] + [0]*(n-3)
if n <= 3:
    print(dp[n]); exit()
for i in range(4, n+1):
    dp[i] = (2*dp[i-1] + dp[i-3]) % MOD
print(dp[-1])