coins = list(map(int, input().split()))
amount = int(input())

dp = [0] + [float('inf') for _ in range(amount)]

for i in range(1, amount+1):
    for j in coins:
        if j <= i:
            dp[i] = min(dp[i],dp[i-j]+1)

# print(dp)
print(-1 if dp[-1] == float('inf') else dp[-1])