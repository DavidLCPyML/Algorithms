s1 = input()
s2 = input()
s3 = input()


n,m = len(s1), len(s2)
dp = [[False for _ in range(m+1)] for _ in range(n+1)]
dp[0][0] = True

# print(*dp, sep='\n')

for i in range(1, n+1):
    dp[i][0] = dp[i-1][0] and s1[i-1] == s3[i-1]
for i in range(1, m+1):
    dp[0][i] = dp[0][i-1] and s2[i-1] == s3[i-1]

for i in range(1, n+1):
    for j in range(1, m+1):
        dp[i][j] |= dp[i-1][j] and s1[i-1] == s3[i+j-1]
        dp[i][j] |= dp[i][j-1] and s2[j-1] == s3[i+j-1]

print(*dp, sep = '\n')
# print(dp[-1][-1])