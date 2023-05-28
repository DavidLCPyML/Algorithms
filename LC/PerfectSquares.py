n = int(input())

dp = [0] * (n+1)

for i in range(1, n+1):
    dp[i] = i
    dp[i] = min(dp[i-j**2] for j in range(1, int(i**0.5)+1)) + 1

print(dp[-1])