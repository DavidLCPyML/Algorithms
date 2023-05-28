n = len(s)
dp = [0]*(n+1)
dp[0] = 1
dp[1] = 1 if s[0] != '0' else 0

for i in range(2, n+1):
    num = int(s[i-2:i])
    if 0 < int(s[i-1]):
        dp[i] = dp[i-1]
    if num <= 26 and num >= 10:
        dp[i] += dp[i-2]
print(*dp, sep = ' ')