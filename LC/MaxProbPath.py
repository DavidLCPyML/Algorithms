# def maxProbability(self, n: int, edges: List[List[int]], succProb: List[float], start: int, end: int) -> float:

g = defaultdict(list)
for (src,dst), p in zip(edges, succProb):
    g[src].append((dst, p))
    g[dst].append((src, p))

heap, visited = [(-1, start)], set()
while heap:
    p, src = heapq.heappop(heap)
    if src == end: return -p
    visited.add(src)
    for dst, weight in g[src]:
        if dst in visited: continue
        heapq.heappush(heap, (p * weight, dst))
return 0