s = input()
m = int(input())

dp = [0]*len(s)
cnt = 0
for i in range(1, len(s)):
    if s[i] == s[i-1]:
        cnt += 1
    dp[i] = cnt

ans = []
for i in range(m):
    l, r = map(int, input().split())
    ans.append(dp[r-1] - dp[l-1])

print(*ans, sep = '\n')