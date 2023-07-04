nums = list(map(int, input().split()))

# 2 pointers
i, j = 0, 0
while i < len(nums):
    if nums[i]:
        nums[i], nums[j] = nums[j], nums[i]
        j += 1
    i += 1

print(*nums)