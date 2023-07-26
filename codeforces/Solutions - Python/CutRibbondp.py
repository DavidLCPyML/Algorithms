import sys
input = sys.stdin.readline

n,a,b,c = map(int, input().split())
vals = [a,b,c]
dp = [-1]*(n+1)
dp[0] = 0
for i in range(1, n+1):
    for val in vals:
        if i >= val:
            dp[i] = max(dp[i], dp[i-val])
    if dp[i] >= 0:
        dp[i] += 1
print(dp[n])