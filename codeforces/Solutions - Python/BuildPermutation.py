import sys, math
input = sys.stdin.readline
t= int(input())

for _ in range(t):
    n = int(input())
    dp = [0 for i in range(n)]
    i = n-1
    while i > -1:
        max_sq = int(math.sqrt(2*i))**2
        if not dp[i] and not dp[max_sq-i]:
            dp[i] = max_sq - i
            dp[max_sq-i] = i
        i -= 1
    print(*dp)
