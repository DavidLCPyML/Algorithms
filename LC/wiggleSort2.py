nums = list(map(int, input().split()))

nums.sort()
med = len(nums) // 2
nums[1::2], nums[::2] = nums[med:][::-1], nums[:med][::-1]

print(nums)