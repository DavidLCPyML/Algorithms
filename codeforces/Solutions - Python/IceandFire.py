import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    s = input().strip()

    dp = [0]*(len(s))
    dp[0] = 1
    for i in range(1, n-1):
        dp[i] = dp[i-1] if s[i-1] == s[i] else i+1
    
    print(*dp)