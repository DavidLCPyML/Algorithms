nums = list((map(int, input().split())))

n = len(nums)
dp = [1 for _ in range(n+1)]

for i in range(n):
    for j in range(i):
        if nums[i] > nums[j]:
            dp[i] = max(dp[i], dp[j]+1)

print(max(dp))