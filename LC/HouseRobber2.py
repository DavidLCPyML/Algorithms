nums = list(map(int, input().split()))

n = len(nums)
if n == 1:
    print(nums[0])
else:
    rob1 = [0 for _ in nums]
    skip1 = [0 for _ in nums]
    rob1[0], rob1[1] = nums[0], nums[0]
    skip1[1] = nums[1]

    for i in range(2, n-1):
        rob1[i] = max(rob1[i-2] + nums[i], rob1[i-1])
    for i in range(2, n):
        skip1[i] = max(skip1[i-2]+nums[i], skip1[i-1])

    print(rob1)
    print(skip1)

    print rob1[-2] if rob1[-2] > skip1[-1] else skip1[-1]