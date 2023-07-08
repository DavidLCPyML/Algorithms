nums = list(map(int, input().split()))

print(max(max(nums) * sorted(nums)[-2] * sorted(nums)[-3], min(nums) * sorted(nums)[0] * sorted(nums)[1]))

print(nums.sort() and None or (max(nums[-1] * nums[-2] * nums[-3], nums[0] * nums[1] * nums[-1])))