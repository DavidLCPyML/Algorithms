import math, bisect

n = int(input())
costs = sorted(map(int, input().split()))

for i in range(int(input())):
    budget = int(input())
    
    # low = 0
    # high = len(costs) - 1
    # while low <= high:
    #     mid = (low + high) // 2
    #     if costs[mid] > budget:
    #         high = mid - 1
    #     else:
    #         low = mid + 1
    print(bisect.bisect(costs, budget))