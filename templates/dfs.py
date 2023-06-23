graph = dict()
num_nodes = set()
for _ in range(int(input())):
    src, dst = map(int, input().split())
    if src not in graph:
        graph[src] = []
        num_nodes.add(src)
    graph[src].append(dst)
    num_nodes.add(dst)


visited = [False]*len(num_nodes)
traversal = []
def dfs(start):
    visited[start-1] = True
    traversal.append(start)
    if start in graph:
        for i in graph[start]:
            if not visited[i-1]:
                dfs(i)

dfs(1)
print(*traversal)