nums = list(map(int, input().split()))

if sum(nums) % 2: print("False")
tgt, n = sum(nums)//2, len(nums)
dp = [[False for _ in range(tgt+1)] for _ in range(n+1)]
dp[0][0] = True

for i in range(1, n+1):
    for j in range(tgt+1):
        if j >= nums[i-1]:
            dp[i][j] = dp[i-1][j - nums[i-1]] or dp[i-1][j]
        else:
            dp[i][j] = dp[i-1][j]

print(*dp, sep = '\n')
print(dp[-1][-1])

