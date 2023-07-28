import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    sa = sorted(a)

    if(a != sa):
        print(0)
        continue

    ans = float('inf')
    for i in range(n-1):
        ans = min(ans, a[i+1] - a[i])

    print(ans//2+ 1)