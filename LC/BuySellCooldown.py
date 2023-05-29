prices = list((map(int, input().split())))

# less memory usage
n = len(nums)
wait, sell, cooldown = -nums[0], 0, -nums[0]
for i in nums:
    temp = sell
    sell = wait + i
    wait = max(wait, cooldown - i)
    cooldown = max(cooldown, temp)
print(wait, sell, cooldown)


# n = len(prices)
# dp = [[0,0,0] for _ in range(n)]
# dp[0][1], dp[0][2] = -prices[0], -prices[0]
# for i in range(1, n):
#     dp[i][0] = max(dp[i-1][0], dp[i-1][2])
#     dp[i][1] = max(dp[i-1][1], dp[i-1][0] - prices[i])
#     dp[i][2] = dp[i-1][1] + prices[i]
# print(max(dp[-1][0], dp[-1][-1]))