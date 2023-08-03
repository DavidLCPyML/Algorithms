import sys
input = sys.stdin.readline

n, x = map(int, input().split())
coins = list(map(int, input().split()))

dp = [-1] * (x+1)
dp[0] = 0
for i in range(1, x+1):
    for j in coins:
        if i >= j and dp[i-1] != -1:
            dp[i] = min(dp[i], dp[i-j] + 1) if dp[i] != -1 else dp[i-j] + 1

print(dp[-1])