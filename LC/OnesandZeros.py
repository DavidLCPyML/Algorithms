strs = input().split()
m, n = map(int, input().split())

sz = len(strs)
dp = [[0 for _ in range(n+1)] for _ in range(m+1)]

for s in strs:
    ones, zeros = s.count('1'), s.count('0')
    for i in range(m, zeros-1, -1):
        for j in range(n, ones-1, -1):
            dp[i][j] = max(dp[i][j], 1+dp[i-zeros][j-ones])


print(dp[n][m])
