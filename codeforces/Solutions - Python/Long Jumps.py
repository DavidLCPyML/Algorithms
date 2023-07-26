t = int(input())
ans = []

for x in range(t):
    n = int(input())
    nums = list(map(int, input().split()))
    dp = [0 for num in range(len(nums))]

    for i in reversed(range(n)):
        dp[i] = nums[i] + dp[i + nums[i]] if (i + nums[i] < n) else nums[i]
    ans.append(max(dp))

print(*ans, sep='\n')