# def maxLevelSum(self, root: Optional[TreeNode]) -> int:

queue, max_sum, max_level, level = [root], root.val, 1, 1

while queue:
    tot = sum([node.val for node in queue])
    tmp = [c for n in queue for c in (n.left, n.right) if c]
    if tot > max_sum:
        max_sum = tot
        max_level = level
    queue = tmp; level += 1

print(max_level)