# def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:

adj = defaultdict(set)
for i, j in prerequisites:
    adj[i].add(j)
visited = [0] * numCourses
ans, cycle = [], False

def dfs(i):
    if cycle: return False
    if visited[i]: cycle = True
    if not visited[i]:
        visited[i] = 1
        for j in adj[i]:
            dfs(j)
        visited[i] = 2
        ans.append(i)

for i in range(numCourses):
    if cycle: break
    if not visited[i]:
        dfs(i)

return [] if cycle else ans