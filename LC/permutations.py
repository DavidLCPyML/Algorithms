nums = list(map(int, input().split()))
n, ans = len(nums), []
def dfs(nums, path):
    if len(path) == n:
        ans.append(path)
        return
    for i in range(len(nums)):
        dfs(nums[:i] + nums[i+1:], path + [nums[i]])
dfs(nums, [])