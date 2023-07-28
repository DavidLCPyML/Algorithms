import sys
input = sys.stdin.readline

n, v = map(int, input().split())
ans = []
for i in range(n):
    prices = list(map(int, input().split()))
    if v > min(prices[1:]):
        ans.append(i+1)

print(len(ans))
print(*sorted(ans))
