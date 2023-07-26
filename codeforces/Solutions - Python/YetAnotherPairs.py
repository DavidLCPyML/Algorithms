import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    res = 0
    dp = [0]*(n+1)
    for i in range(1, n+1):
            dp[i] = dp[i-1] + 1 if arr[i-1] < i else dp[i-1]
    for i in range(1, n+1):
        if arr[i-1] > 0 and arr[i-1] < i: #0 is "illegal"
            res += dp[arr[i-1] - 1]
    ans.append(res)

print(*ans, sep = '\n')
