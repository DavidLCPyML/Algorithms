import sys
input = sys.stdin.readline

nums = list(map(int, input().split()))

nums.sort()
l, r = 0, nums[-1] - nums[0]
while l < r:
    mid, res, i = (r + l) // 2, 0, 1
    while i < len(nums):
        if nums[i] - nums[i-1] <= mid:
            res += 1
            i += 1
        i += 1
    
    if res >= p:
        r = mid
    else:
        l = mid + 1
print(l)