import sys
input = sys.stdin.readline

MOD = 10**9 + 7
ans = []
for _ in range(int(input())):
    n = int(input())
    arr = [list(map(int, input().split())) for _ in range(2)]

    graph = dict()
    for i in range(n):
        graph[arr[0][i]] = arr[1][i]
    # d=dict(zip(a,b)) does the same as the loop above

    sccs = 1
    while len(graph) > 0:
        sccs = sccs * 2 % MOD
        k,v = graph.popitem()
        while v != k:
            v = graph.pop(v)
    ans.append(sccs)

print(*ans, sep = '\n')