nums = list(map(int, input().split()))

ans = sum([num for num in nums if nums.count(num) == 1])
print(ans)