import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n = int(input())
    cakes = list(map(int, input().split()))

    flag = True
    currsum = 0
    for i in range(n):
        currsum += cakes[i]
        flag &= (currsum > 0)
    currsum = 0
    for i in range(n-1,-1,-1):
        currsum += cakes[i]
        flag &= (currsum > 0)

    ans.append("YES" if flag else "NO")

print(*ans, sep = '\n')