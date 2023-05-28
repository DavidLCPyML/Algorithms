import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n = int(input())
    cakes = list(map(int, input().split()))

    y = sum(cakes)
    a1, currsum = cakes[0], 0
    for i in range(n-1):
        currsum += cakes[i]
        a1 = max(a1, currsum)
        currsum = max(0, currsum)
    a2, currsum = cakes[1], 0
    for i in range(1, n):
        currsum += cakes[i]
        a2 = max(a2, currsum)
        currsum = max(0, currsum)
    ans.append("YES" if y > max(a1, a2) else "NO")

print(*ans, sep = '\n')