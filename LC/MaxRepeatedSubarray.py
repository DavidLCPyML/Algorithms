A = list(map(int, input().split()))
B = list(map(int, input().split()))

m,n = len(A), len(B)
dp = [[0]*(n+1) for _ in range(m+1)]
ans = 0
for i in range(1, m+1):
    for j in range(1, n+1):
        if A[i-1] == B[j-1]:
            dp[i][j] = dp[i-1][j-1] + 1
            ans = max(ans, dp[i][j])

print(ans)