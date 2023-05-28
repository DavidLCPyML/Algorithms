nums = list(map(int, input().split()))

ans = nums[0]
imax = ans
imin = ans

for i in range(1, len(nums)):
    if nums[i] < 0:
        temp = imin
        imin = imax
        imax = temp
    imin = min(nums[i], imin * nums[i])
    imax = max(nums[i], imax * nums[i])
    
    ans = max(ans, imax)

print(ans)