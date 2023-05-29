import bisect
nums = list((map(int, input().split())))

res = []
for i in nums:
    if not res or i > res[-1]:
        res.append(i)
    else:
        res[bisect.bisect_left(res, i)] = i

# print(*res)
print(len(res))