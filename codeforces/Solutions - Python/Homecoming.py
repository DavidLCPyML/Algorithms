import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    a,b,p = map(int, input().split())
    s = input().strip()
    n = len(s)

    dp = [0] * n
    dp[n - 2] = a if s[n-2] == 'A' else b
    for i in range(n - 3, -1, -1):
        dp[i] = dp[i+1]
        if s[i] != s[i+1]:
            dp[i] += a if s[i] == 'A' else b

    for i in range(n):
        if dp[i] <= p:
            ans.append(i+1)
            break
print(*ans, sep = '\n')