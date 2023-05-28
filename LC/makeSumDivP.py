nums = list(map(int, input().split()))
p = int(input())

n = len(nums)
dp = {0:-1}
target = sum(nums) % p

currSum, ans = 0, n
for i in range(n):
    currSum = (currSum + nums[i]) % p
    dp[currSum] = i

    last = (currSum - target + p) % p
    if last in dp:
        ans = min(ans, i - dp[last])

print(-1 if ans == n else ans)
