import sys
input = sys.stdin.readline

n = int(input())
dp = [float('inf')] * 8
dp[0] = 0
for _ in range(n):
    c, v = input().split()
    c = int(c)
    v = sum(1 << (ord(i) - ord('A')) for i in v)
    for i in range(8):
        dp[i | v] = min(dp[i | v], dp[i] + c)
print(dp[7] if dp[7] != float('inf') else -1)