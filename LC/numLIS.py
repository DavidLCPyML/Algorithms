import bisect
nums = list(map(int, input().split()))

n = len(nums)
maxlen, dp = 1, [[1,1]]*n
for i, num in enumerate(nums):
    currmax, cnt = 1, 0
    for j in range(i):
        if nums[j] < num:
            currmax = max(currmax, dp[j][0] + 1)
    for j in range(i):
        if dp[j][0] == currmax - 1 and nums[j] < num:
            cnt += dp[j][1]
    dp[i] = [currmax, max(cnt, dp[i][1])]
    maxlen = max(currmax, maxlen)

print(sum(dp[i][1] for i in range(n) if dp[i][0] == maxlen))