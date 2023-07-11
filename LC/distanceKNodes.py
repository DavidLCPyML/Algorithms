# def distanceK(self, root: TreeNode, target: TreeNode, k: int) -> List[int]:

graph = defaultdict(list)
def buildGraph(node, parent, graph):
    if not node: return
    if parent: graph[node].append(parent)
    for c in [node.left, node.right]:
        if c:
            graph[node].append(c)
            buildGraph(c, node, graph)
buildGraph(root, None, graph)

queue, visited, ans = [[target, 0]], set(), []
while queue:
    node, dist = queue.pop(0)
    if node in visited:
        continue
    visited.add(node)
    
    if dist == k:
        ans.append(node.val)
    elif dist < k:
        for i in graph[node]:
            queue.append([i, dist + 1])

return ans