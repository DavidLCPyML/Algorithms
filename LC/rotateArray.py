nums = list(map(int, input().split()))
k = int(input())

def reverse(nums, i, j):
    l, r = i, j
    while l < r:
        nums[l], nums[r] = nums[r], nums[l]
        l, r = l+1, r-1

k = k % len(nums)
if k < 0:
    k += len(nums)

reverse(nums, 0, len(nums)-k-1)
reverse(nums, len(nums)-k, len(nums)-1)
reverse(nums, 0, len(nums)-1)
print(nums)