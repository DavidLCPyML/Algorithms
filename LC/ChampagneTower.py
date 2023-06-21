poured, query_row, query_glass = map(int, input().split())

dp = [poured] + [0]*query_row
for i in range(1, query_row + 1):
    for j in range(i, -1, -1):
        dp[j] = max(dp[j]-1, 0) / 2 + max(dp[j-1]-1, 0) / 2
print(*dp)
print(min(dp[query_glass], 1.0))