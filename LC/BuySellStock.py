prices = list(map(int, input().split()))

# we either bought or sold on this day.
# brute force: enumerate all i,j pairs

cheapest = prices[0]
maxprofit = 0

for i in range(1, len(prices)):
    if prices[i] < cheapest:
        cheapest = prices[i]
    elif prices[i] - cheapest > maxprofit:
        maxprofit = prices[i] - cheapest

print(maxprofit)