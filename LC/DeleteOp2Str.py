word1 = input().strip()
word2 = input().strip()

n = len(word1)
m = len(word2)

dp = [[0]*(n+1) for _ in range(m+1)]
for i in range(0, m+1):
    dp[i][0] = i
for i in range(0, n+1):
    dp[0][i] = i

for i in range(1, m+1):
    for j in range(1, n+1):
        if word2[i-1] == word1[j-1]:
            dp[i][j] = dp[i-1][j-1]
        else:
            dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + 1

print(*dp, sep = '\n')
print(dp[-1][-1])