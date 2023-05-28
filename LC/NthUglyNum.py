n = int(input())

dp = [0 for _ in range(n)]
min2, min3, min5 = 0,0,0
dp[0] = 1

for i in range(1, n):
    dp[i] = min(dp[min2]*2, dp[min3]*3, dp[min5]*5)

    if dp[i] == dp[min2]*2:
        min2 += 1
    if dp[i] == dp[min3]*3:
        min3 += 1
    if dp[i] == dp[min5]*5:
        min5 += 1

print(*dp)
print(dp[-1])
