# INPUT: n: int, flights: List[List[int]], src: int, dst: int, k: int EXPECTS int

# BF
cost = [float('inf')]*n
cost[src] = 0

for _ in range(k+1):
    tmp = cost.copy()

    for i in flights:
        curr, dest, price = i[0], i[1], i[2] 
        if cost[curr] != float('inf'):
            tmp[dest] = min(tmp[dest], cost[curr] + price)
    cost = tmp
return cost[dst] if cost[dst] != float('inf') else -1

# Dijkstra-like
adjList = defaultdict(list)
for s,d,c in flights:
    adjList[s].append((c, d))

costs, visited = [(0, src, -1)], dict()
while costs:
    p, d, s = heappop(costs)
    if (d in visited and s >= visited[d]) or (s >= k and d != dst):
        continue
    if d == dst:
        return p
    for adj in adjList[d]:
        heappush(costs, (p+adj[0], adj[1], s+1))
    visited[d] = s
return -1