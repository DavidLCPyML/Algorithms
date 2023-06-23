arr = list(map(int, input().split()))

arr.sort()
MOD, res = int(1e9+7), 0
dp = {i: 1 for i in arr}

for i, val in enumerate(arr):
    for j in arr[:i]:
        if not val % j:
            check = val / j
            if val / j in dp:
                dp[val] += dp[check] * dp[j]

# print(dp) # debug
print(sum(dp.values()) % MOD)