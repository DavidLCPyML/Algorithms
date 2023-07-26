import sys
input = sys.stdin.readline

s = input().strip()
dp = [1] + [0]*len(s)
dp[1] = 1
for i in range(2, len(s)+1):
    dp[i] = dp[i-1]
    if s[i-1] == s[i-2] and (s[i-1] == 'n' or s[i-1] == 'u'):
        dp[i] = (dp[i] + dp[i-2]) % 1000000007
    elif s[i-1] == 'm' or s[i-1] == 'w':
        print(0)
        exit()

print(dp[-1] if s[0] != 'm' and s[0] != 'w' else 0)
