def helper(self, root, dp):
    if not root:
        return 0
    if root in dp:
        return dp[root]

    res = 0
    if root.left:
        res += self.helper(root.left.left, dp) + self.helper(root.left.right, dp)
    if root.right:
        res += self.helper(root.right.right, dp) + self.helper(root.right.left, dp)
    
    res = max(res + root.val, self.helper(root.left, dp) + self.helper(root.right, dp))
    dp[root] = res
    return res
    
dp = dict()
print(helper(root, dp))