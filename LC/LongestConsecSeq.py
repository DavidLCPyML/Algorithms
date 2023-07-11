nums =list(map(int, input().split()))

res, runs = 0, dict()
for i in nums:
    if i not in runs:
        l, r = runs[i-1] if i-1 in runs else 0, runs[i+1] if i+1 in runs else 0
        currlen = r + l + 1
        res = max(res, currlen)
        runs[i] = runs[i-l] = runs[i+r] = currlen
return res


# nums, ans = set(nums), 0
# for i in nums:
#     j = i+1
#     if i-1 not in nums:
#         while j in nums:
#             j+=1
#         ans = max(ans, j-i)
# return ans