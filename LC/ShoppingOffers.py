# input: price: List[int], special: List[List[int]], needs: List[int]

n = len(needs)
dp = dict()

def dfs(need):
    key = tuple(need)
    if key in dp:
        return dp[key]
    
    res = sum(i*j for i, j in zip(price, need))
    for offer in special:
        left = [i-j for i,j in zip(need, offer)]
        if min(left) >= 0:
            res = min(res, dfs(left) + offer[-1])
    dp[key] = res
    return res

print(dfs(needs))