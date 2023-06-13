n = int(input())

dp = dict()
def back(i, left, dp):
    if i == 1: return 1
    key = (i, left)
    if key in dp: return dp[key]
    
    tot = 0
    for j, x in enumerate(left):
        if not (x % i and i % x):
            tot += back(i-1, left[:j] + left[j+1:], dp)

    dp[key] = tot
    return tot

print(back(n, tuple(range(1, n+1)), dp))