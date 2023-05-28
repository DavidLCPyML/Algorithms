nums = list(input().split(','))
nums[0] = nums[0].replace("[", "")
nums[len(nums)-1] = nums[len(nums)-1].replace("]", "")
nums = [int(i) for i in nums]

# kadane's
ans = 0
currsum = 0
for i in nums:
    currsum += i
    ans = max(currsum, ans)
    currsum = max(0, currsum)

print(ans)