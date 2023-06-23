arr = list(map(int, input().split()))

dp, curr = set(), set()
for i in arr:
    curr = {i | j for j in curr} | {i}
    dp = dp | curr
print(dp)
