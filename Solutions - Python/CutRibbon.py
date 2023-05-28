import sys
input = sys.stdin.readline

n,a,b,c = map(int, input().split())
ans = -1
maxx = n // a

for x in range(maxx + 1):
    maxy = (n-(a*x)) // b
    for y in range(maxy + 1):
        z = n - a*x - b*y
        if not z % c:
            ans = max(ans, x + y + z//c)

print(ans)