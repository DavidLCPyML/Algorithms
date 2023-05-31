nums = list(map(int, input().split()))

if not nums: print(0)
else:
    pos, neg = 1, 1

    for i in range(1, len(nums)):
        if nums[i] < nums[i-1]:
            neg = pos + 1
        elif nums[i] > nums[i-1]:
            pos = neg + 1

    print(max(pos, neg))