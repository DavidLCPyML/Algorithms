# def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:

dummy = TreeNode(val, root, None)
nodes = [dummy]
for _ in range(depth-1):
    tmp = []
    for n in nodes:
        if n.left: tmp.append(n.left)
        if n.right: tmp.append(n.right)
    nodes = tmp
for n in nodes:
    n.left, n.right = TreeNode(val, n.left, None), TreeNode(val, None, n.right)
return dummy.left