matchsticks = list(map(int, input().split()))

tot, sz = sum(matchsticks), len(matchsticks)
if tot % 4 or tot < 4:
    print("false")
    exit()

goal = tot // 4
matchsticks.sort(reverse=True)
dp = dict()

def dfs(i, s1, s2, s3, s4, dp):
    if i >= sz:
        return s1 == s2 == s3 == s4 == goal
    if s1 > goal or s2 > goal or s3 > goal or s4 > goal:
        return False
    if (s1, s2, s3, s4) in dp:
        return dp[(s1, s2, s3, s4)]

    ans = False
    stick = matchsticks[i]
    
    ans = ans or dfs(i+1, s1+stick, s2, s3, s4, dp)
    ans = ans or dfs(i+1, s1, s2+stick, s3, s4, dp)
    ans = ans or dfs(i+1, s1, s2, s3+stick, s4, dp)
    ans = ans or dfs(i+1, s1, s2, s3, s4+stick, dp)
    
    dp[(s1, s2, s3, s4)] = ans
    return ans

print(dfs(0, 0, 0, 0, 0, dp))
