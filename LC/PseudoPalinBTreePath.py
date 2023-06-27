# def pseudoPalindromicPaths (self, root: Optional[TreeNode]) -> int:

def dfs(root, cnt: int = 0):
    if not root: return 0
    cnt ^= 1 << (root.val - 1)
    res = dfs(root.left, cnt) + dfs(root.right, cnt)
    if not root.left and not root.right:
        if cnt & (cnt - 1) == 0:
            res += 1
    print(cnt)
    return res

ans = dfs(root)
return ans