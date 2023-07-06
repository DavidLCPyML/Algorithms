# def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:

queue, tot = [root], 0
while queue:
    node = queue.pop(0)
    if node.left:
        queue.append(node.left)
        if not node.left.left and not node.left.right:
            tot += node.left.val
    if node.right:
        queue.append(node.right)
print(tot)

# dfs version
if not root:
    return 0
elif root.left or root.right:
    return self.sumOfLeftLeaves(root.left, True) + self.sumOfLeftLeaves(root.right, False)
else:
    return root.val if isleft else 0