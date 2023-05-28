import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    dp = [0] * (max(a) + 2)
    for i in a:
        dp[i+1] = max(dp[i+1], dp[i] + 1)
        dp[i] = max(dp[i], dp[i-1] + 1)
    # print(max(dp))
    print(dp)