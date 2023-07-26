import math, bisect, sys

n, k = map(int, input().split())
planks = list(map(int, input().split()))
for i in range(1, n):
    planks[i] += planks[i-1]
# print(planks)

sum = planks[k-1]
pos = 0
# print(sum, k)
for i in range(k, n):
    diff = planks[i] - planks[i-k]
    # print(planks[i], planks[i-k])

    if diff < sum:
        sum = diff
        pos = i - k + 1
        # print(diff, i+1)

print(pos + 1)