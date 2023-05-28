nums = list(input().split(','))
nums[0] = nums[0].replace("[", "")
nums[len(nums)-1] = nums[len(nums)-1].replace("]", "")
nums = [int(i) for i in nums]

best = 0
for i in range(len(nums)):
    if i > best:
        print("False")
    best = max(best, i + nums[i])

print("True")