nums = list(map(int, input().split()))

nums.sort()
dp = [[]]

for i in nums:
    factors = []
    for s in dp:
        if not (s and i % s[0]):
            factors.append(s)
    new = [i] + max(factors, key=len)
    dp.append(new)

print(max(dp, key=len))