import sys
prices = list(map(int, input().split()))

ans = 0
currmin = prices[0]
currmax = prices[0]
for i in prices:
    if i < currmin:
        currmax = 0
        currmin = i
    elif i > currmax:
        ans += i - currmin
        currmax = i
        currmin = i

print(ans)