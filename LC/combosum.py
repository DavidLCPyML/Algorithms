candidates = list(map(int, input().split()))
target = int(input())

ans, curr = [], []
def dfs(candidates, target, curr, sum, pos):
    if target < 0:
        return
    if target == 0:
        ans.append(curr)
        return
    for i in range(pos, len(candidates)):
        dfs(candidates, target - candidates[i], curr + [candidates[i]], sum, i)
dfs(candidates, target, curr, 0, 0)

print(ans)