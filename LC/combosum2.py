candidates = list(map(int, input().split()))
target = int(input())

ans = []
candidates.sort()
def dfs(curr, path, pos):
    if target < curr:
        return
    if target == curr:
        ans.append(path)
        return
    for i in range(pos, len(candidates)):
        if(i > pos and candidates[i] == candidates[i-1]):
            continue
        dfs(curr + candidates[i], path + [candidates[i]], i+1)
dfs(0, [], 0)
print(ans)