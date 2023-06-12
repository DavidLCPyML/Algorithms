nums = list(map(int, input().split()))

if not nums: print([]); exit()
if len(nums) == 1:
    print([str(nums[0])])
    exit()

nums += [3e9]
i = 0
ans = []
while i < len(nums)-1:
    old = i
    while old < len(nums)-1 and nums[old] == nums[old+1]-1:
        old += 1
    add = str(nums[i]) + "->" + str(nums[old]) if old != i else str(nums[i])
    ans.append(add)
    i = old+1

print(ans)