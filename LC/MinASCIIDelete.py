word1 = input().strip()
word2 = input().strip()

n = len(word1)
m = len(word2)

dp = [[0]*(n+1) for _ in range(m+1)]


for i in range(m):
    for j in range(n):
        if s1[i] == s2[j]:
            dp[i+1][j+1] = ord(s1[i])+dp[i][j]
        else:
            dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1])
print(sum(map(ord, s1 + s2)) - 2* dp[-1][-1])