import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n,m,k = map(int, input().split())
    cols = list(map(int, input().split()))

    bag = m
    for i in range(n-1):
        if cols[i] < cols[i+1] - k:
            bag -= (cols[i+1] - cols[i] - k)
        elif cols[i] >= cols[i+1] - k:
            bag += cols[i] - max(0, cols[i+1] - k)
        if bag < 0:
            break

    ans.append("YES" if bag > -1 else "NO")
print(*ans, sep = '\n')