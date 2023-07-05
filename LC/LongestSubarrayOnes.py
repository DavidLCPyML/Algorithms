nums = list(map(int, input().split()))

k, i = 1, 0
for j in range(len(nums)):
    k -= nums[j] == 0
    if k < 0:
        k += nums[i] == 0
        i += 1
print(j - i)