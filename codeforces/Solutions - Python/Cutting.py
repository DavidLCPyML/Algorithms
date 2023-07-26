import sys
input = sys.stdin.readline
n,b = map(int,input().split())
seq = list(map(int, input().split()))

dp = [0]*n
price = []
dp[0] = 1 if seq[0] % 2 else -1
for i in range(1, len(seq)-1):
    if seq[i] % 2:
        dp[i] = dp[i-1] + 1
    else:
        dp[i] = dp[i-1] - 1
    if not dp[i]:
        price.append(abs(seq[i+1] - seq[i]))

price.sort()
# print(price)
ans = 0
for i in range(len(price)):
    if b < price[i]:
        break
    else:
        b -= price[i]
        ans += 1

print(ans)