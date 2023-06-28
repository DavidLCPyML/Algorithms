# def findDuplicateSubtrees(self, root: Optional[TreeNode]) -> List[Optional[TreeNode]]:

nodes = defaultdict(list)
def search(root):
    if not root:
        return "null"
    nodestr = ','.join([str(root.val), search(root.left), search(root.right)])
    nodes[nodestr].append(root)
    return nodestr

search(root)
return [nodes[i][0] for i in nodes if len(nodes[i])-1]