nums = list(map(int, input().split()))
k = int(input())

n = len(nums)
dp=[[0]*k for _ in nums]

for j in range(n):
    for i in range(k): 
        if not i:
            dp[j][i] = sum(nums[:j+1]) / (j+1)
        elif j < i:
            break
        else:
            for x in range(j):
                dp[j][i] = max(dp[x][i-1] + sum(nums[x+1:j+1])/(j-x), dp[j][i])

print(*dp, sep='\n')