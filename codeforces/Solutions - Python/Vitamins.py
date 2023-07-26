import sys
input = sys.stdin.readline

juices = int(input())
costs = {}

for i in range(juices):
    a, b = input().split()
    b = ''.join(sorted(b))
    a = int(a)
    costs[b] = min(a, costs[b]) if b in costs else a
costs = dict(sorted(costs.items(), key=lambda x: x[1]))

res = sys.maxsize
if 'A' in costs and 'B' in costs and 'C' in costs:
    res = min(res, costs['A'] +costs['B'] +costs['C'])
if 'ABC' in costs:
    res = min(res, costs['ABC'])
# 2 pairs
for i in costs:
    for j in costs:
        combo = i+j
        if combo.count('A') and combo.count('B') and combo.count('C'):
            res = min(res, costs[i] + costs[j])

print(res if res != sys.maxsize else -1)