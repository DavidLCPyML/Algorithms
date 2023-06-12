nums = list(map(int, input().split()))

sz = len(nums)
if not n % 2:
    print("true")
    exit()
dp = [0] * sz

for i in range(n-1, -1, -1):
    for j in range(i, sz):
        if i == j:
            dp[i] = nums[i]
        else:
            dp[j] = max(nums[i] - dp[j], nums[j] - dp[j-1])

print(dp[n-1] >= 0)