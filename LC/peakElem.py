nums = list(map(int, input().split()))

l, h = 0, len(nums) - 1
while l < h:
    mid = (l + h) // 2
    if nums[mid] > nums[mid + 1]:
        h = mid
    else:
        l = mid + 1
print(l)