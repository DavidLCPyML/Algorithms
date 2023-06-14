n = int(input())

dp = [0]*(n+1)
for i in range(2, n+1):
    dp[i] = i
    for j in range(i-1, 1, -1):
        if not i % j:
            dp[i] = dp[j] + (i//j)
            break

print(*dp)
print(dp[-1])