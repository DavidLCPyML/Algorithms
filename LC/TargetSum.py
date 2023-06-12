nums = list(map(int, input().split()))
target = int(input())

tot = sum(nums)
if target > abs(tot):
    print(0)
    exit()

max_possible, sz = 2*tot+1, len(nums)
dp = [0]*(max_possible)
dp[tot] = 1

for i in range(sz):
    nxt = [0]*max_possible
    for j in range(max_possible):
        if dp[j] != 0:
            nxt[j + nums[i]] += dp[j]
            nxt[j - nums[i]] += dp[j]

    dp = nxt

print(dp[target+tot])