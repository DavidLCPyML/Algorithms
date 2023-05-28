import sys
input = sys.stdin.readline

t = int(input())
ans = []
for i in range(t):
    n = int(input())
    explorers = sorted(map(int, input().split()))
    cnt = 0
    size = 0
    for i in explorers:
        size += 1
        if size >= i:
            cnt += 1
            size = 0
    ans.append(cnt)

print(*ans, sep='\n')