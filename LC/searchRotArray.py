nums = list(map(int, input().split()))

def find_pivot(nums):
    l, h = 0, len(nums)-1
    while l < h:
        m = (l+h)//2
        if nums[m] > nums[h]:
            l = m + 1
        else:
            h = m
    return l

pivot, n = find_pivot(nums), len(nums)

def find(nums, tgt):
    l, h = 0, n-1
    while l <= h:
        m = (l+h)//2
        pivot_m = (m + pivot) % n
        if nums[pivot_m] == tgt:
            return pivot_m
        elif nums[pivot_m] < tgt:
            l = m + 1
        else:
            h = m - 1
    return -1

print(find(nums, target))