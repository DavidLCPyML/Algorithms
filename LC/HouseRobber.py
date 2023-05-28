nums = list(map(int, input().split()))

if len(nums) == 1:
    print(nums[0])
dp = [0 for i in range(len(nums))]
dp[0] = nums[0]
dp[1] = max(nums[0], nums[1])
for i in range(2, len(dp)):
    dp[i] = max(dp[i-2] + nums[i], dp[i-1])

print(dp[-1])
print(dp)