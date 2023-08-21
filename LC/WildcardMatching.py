s = input().strip()
p = input().strip()

dp = [[False] * (len(p)+1) for _ in range(len(s) + 1)]
dp[0][0] = True

for i in range(1, len(p)+1):
    if p[i-1] != '*':
        break
    dp[0][i] = True

for i in range(1, len(s)+1):
    for j in range(1, len(p)+1):
        if p[j-1] == s[i-1] or p[j-1] == '?':
            dp[i][j] = dp[i-1][j-1]
        elif p[j-1] == '*':
            dp[i][j] = dp[i-1][j] or dp[i][j-1] or dp[i-1][j-1]

print(dp[-1][-1])



# linear time
class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        i, j = 0, 0
        m, n = len(s), len(p)
        last_match, starj = -1, -1
        while i < m:
            if j < n and (s[i] == p[j] or p[j] == '?'):
                i, j = i+1, j+ 1
            elif j < n and p[j] == '*':
                starj, last_match = j, i
                j += 1
            elif starj != -1:
                last_match += 1
                i, j = last_match, starj + 1
            else:
                return False;
        while j < n and p[j] == '*': 
            j += 1
        return j == n