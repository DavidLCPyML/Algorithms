import sys
input = sys.stdin.readline

# MOD = 10**9 + 7
ans = []
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    s = input().strip()

    adj = dict()
    for i in range(n):
        adj[i+1] = [1,0] if s[i] == 'W' else [0,1]

    for i in range(n-1, 0, -1):
        adj[a[i-1]][0] += adj[i+1][0]
        adj[a[i-1]][1] += adj[i+1][1]

    res = 0
    for i in adj:
        res += 1 if adj[i][0] == adj[i][1] else 0
    ans.append(res)

print(*ans, sep = '\n')