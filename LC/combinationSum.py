nums = list(map(int, input().split()))
target = int(input())

dp = [0]*(target+1)
dp[0] = 1
n = len(nums)
for i in range(1, target+1):
    for j in range(0, n):
        if i >= nums[j]:
            dp[i] += dp[i-nums[j]]

print(*dp)