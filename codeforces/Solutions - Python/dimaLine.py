#358A
import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

pairs = [(a[i], a[i+1]) for i in range(n-1)]
ans = False
for i in range(n-1):
    for j in range(i+1, n-1):
        a,b,c,d = min(pairs[i][0], pairs[i][1]), min(pairs[j][0], pairs[j][1]), max(pairs[i][0], pairs[i][1]), max(pairs[j][0], pairs[j][1])
        if a < b < c < d or b < a < d < c:
            ans = True
            break

print("yes" if ans else "no")