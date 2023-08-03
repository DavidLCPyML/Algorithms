import sys
input = sys.stdin.readline

n = int(input())

dp = [0] * max(n+1, 7)

for i in range(1, 7):
    dp[i] = 2**(i-1)
for i in range(7, n + 1):
    dp[i] = sum(dp[i-6:i]) % (10**9 + 7)
print(dp[n])