target = int(input())
nums = list(map(int, input().split()))

i, res = 0, len(nums) + 1
for j in range(len(nums)):
    target -= nums[j]
    while target <= 0:
        res = min(res, j - i + 1)
        target += nums[i]
        i += 1
print(res if res <= len(nums) else 0)