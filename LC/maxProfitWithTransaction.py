prices = list(map(int, input().split()))
fee = int(input())

if len(prices) == 1: print(0), exit()
ans = 0
low = prices[0]

for i in range(1, len(prices)):
    if prices[i] < low:
        low = prices[i]
    elif prices[i] - fee > low:
        ans += prices[i] - fee - low
        low = prices[i] - fee
    # print(ans)

print(ans)