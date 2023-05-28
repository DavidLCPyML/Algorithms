import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n,m = map(int,input().split())
    ints = sorted(map(int, input().split()), reverse=True)
    prices = list(map(int, input().split()))

    cost = 0
    index = 0
    for i in range(n):
        if index < m:
            cost += min(prices[index], prices[ints[i] - 1])
            index += prices[index] < prices[ints[i]-1]
        else:
            cost += prices[ints[i] - 1]
    ans.append(cost)

print(*ans, sep = '\n')