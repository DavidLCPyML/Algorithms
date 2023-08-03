import sys
input = sys.stdin.readline

for i in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    curr, best, d, ans = 0, 0, 0, 0
    for i in range(n):
        curr += a[i]
        best = max(best, curr)
        if curr - best < d:
            d = curr - best
            ans = best
    
    print(ans)