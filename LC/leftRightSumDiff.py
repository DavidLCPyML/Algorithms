from itertools import accumulate
nums = list(map(int, input().split()))

pref, suff = 0, sum(nums)
ans = []
for i in nums:
    pref += i
    ans.append(abs(pref - suff))
    suff -= i
print(*ans)

# convert to 1 liner
print(*[abs(a - b) for a, b in zip(list(accumulate(nums)), list(accumulate(nums[::-1]))[::-1])])