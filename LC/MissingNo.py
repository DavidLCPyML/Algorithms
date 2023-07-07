nums = list(map(int, input().split()))

print(sum(range(0, len(nums)+1)) - sum(nums))

print((len(nums) * (len(nums)+1)//2 - sum(nums)))