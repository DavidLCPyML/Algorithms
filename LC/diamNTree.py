# def diameter(self, root: Optional[TreeNode]) -> int:

def dfs(root, ans):
    if not root:
        return 0
    m1 = m2 = 0
    for child in root.children:
        t = dfs(child, ans)
        if t > m1:
            m2, m1 = m1, t
        elif t > m2:
            m2 = t
    ans[0] = max(ans[0], m1 + m2)
    return 1 + m1

ans = [0]
dfs(root, ans)
return ans[0]