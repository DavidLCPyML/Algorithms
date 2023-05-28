nums = list(input().split(','))
nums[0] = nums[0].replace("[", "")
nums[len(nums)-1] = nums[len(nums)-1].replace("]", "")
nums = [int(i) for i in nums]


moves = 0
maxjumpto = 0
start,end = 0,0
while end < len(nums) - 1:
    for i in range(start, end + 1):
        maxjumpto = max(maxjumpto, i + nums[i])
    start = end + 1
    end = maxjumpto
    moves += 1

print(moves)