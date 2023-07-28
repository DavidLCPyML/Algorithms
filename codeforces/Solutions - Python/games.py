import sys
input = sys.stdin.readline

n = int(input())
colors = []
for _ in range(n):
    a,b = map(int, input().split())
    colors.append([a,b])
ans = 0
for i in range(n):
    for j in range(n):
        if i != j and colors[i][0] == colors[j][1]:
            ans += 1

print(ans)