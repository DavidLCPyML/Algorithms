A = list(map(int, input().split()))

wsum = sum(i*j for i,j in enumerate(nums))
tot = sum(nums)
n = len(nums)
ans = wsum
for j in range(1, n):
    wsum -= tot - nums[j-1]*n
    ans = max(ans, wsum)

print(ans)