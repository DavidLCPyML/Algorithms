nums = list(map(int, input().split()))

if len(nums) == 1: print(str(nums[0]))
elif len(nums) == 2: print(str(nums[0]) + "/" + str(nums[1]))
ans += str(nums[0]) + "/(" + str(nums[1])
for i in range(2, len(nums)):
    ans += "/" + str(nums[i])
print(ans + ")")