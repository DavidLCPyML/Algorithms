import sys, string
input = sys.stdin.readline

m,n = map(int, input().split())
times = [list(map(int, input().split())) for i in range(m)]

prev, curr = [0]*m, [0]*m
for j in range(n):
    curr[0] = max(0, prev[0]) + times[0][j]
    for i in range(1, m):
        curr[i] = max(curr[i-1], prev[i]) + times[i][j]
    prev = curr

print(*curr)