nums = list(map(int, input().split()))

cur = 0
for i in range(len(nums)):
    cur += nums[i] 
    nums[i] = cur
print(nums)

# 1 liner
[sum(nums[:i+1]) for i in range(len(nums))]
# though I guess with python functions you could just do 'accumulate(nums)'