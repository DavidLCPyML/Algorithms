# def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:

queue = [root]
res = []

while queue:
    res.append([node.val for node in queue])
    queue = [c for n in queue for c in (n.left, n.right) if c]

# ok "real" bfs time
queue = deque([root])
res = []
while queue:
    level = []
    for _ in range(len(queue)):
        node = queue.popleft()
        level.append(node.val)
        if node.left:
            queue.append(node.left)
        if node.right:
            queue.append(node.right)
    res.append(level)
return res