nums = list(map(int, input().split()))

nums.sort()
ans, n, i = [], len(nums), 0

while i < n:
    tgt, start, end = -nums[i], i+1, n - 1
    if tgt < 0: break


    while start < end:
        if nums[start] + nums[end] > tgt: end -= 1
        elif nums[start] + nums[end] < tgt: start += 1
        else:
            sol = [nums[i], nums[start], nums[end]]
            ans.append(sol)

            while start < end and nums[start] == nums[i]: start += 1
            while start < end and nums[end] == sol[2]: end -= 1

    while i < n-1 and nums[i] == nums[i+1]: 
        i += 1
    i += 1

print(*ans, sep = '\n')