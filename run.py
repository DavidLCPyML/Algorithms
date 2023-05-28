s1 = input()
s2 = input()
s3 = input()

ans = False
dp = [[False for _ in range(len(s2))] for _ in range(len(s1))]        
if len(s3) != len(s1)+len(s2): print(ans)
idx = 1
dp[0][0] = s1[0] == s3[0]
dp[1][0] = s2[0] == s3[0]
for i in range(1, len(s1)):
    for j in range(i, len(s2)):
        dp[i][j] = (dp[i-1][j] or dp[i][j-1]) and (s1[i] == s3[idx] or s2[j]==s3[idx])
        idx+=1

print(dp[-1][-1])