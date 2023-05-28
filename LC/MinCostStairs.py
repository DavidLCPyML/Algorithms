costs = list(input().split(','))
costs[0] = costs[0].replace("[", "")
costs[len(costs)-1] = costs[len(costs)-1].replace("]", "")
costs = [int(i) for i in costs]

# solution
dp = [0 for i in range(len(costs))]
dp[0] = costs[0]
dp[1] = costs[1]

for i in range(2, len(costs)):
    dp[i] = min(dp[i-2], dp[i-1]) + costs[i]

print(min(dp[-1], dp[-2]))