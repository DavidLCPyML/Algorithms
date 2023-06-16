nums = list(map(int, input().split()))
k = int(input())

currsums = [0]*k
if sum(nums) % k: print("false"); exit()
tgt, n = sum(nums) // k, len(nums)
nums.sort(reverse=True)

def dfs(idx):
    if idx == n:
        return len(set(currsums)) == 1
    for i in range(k):
        currsums[i] += nums[idx]
        if currsums[i] <= tgt and dfs(idx+1): return True
        currsums[i] -= nums[idx]
        if not currsums[i]: break
    return False

print(dfs(0))