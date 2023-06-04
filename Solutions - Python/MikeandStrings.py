import sys
input = sys.stdin.readline

n = int(input())
a = [input().strip() for _ in range(n)]
t = ""
m = float("inf")
for i in a:
    c = 0
    for j in range(len(a)):
        swap = 0
        t = a[j]
        while t != i:
            t = t[1:] + t[0]
            swap += 1
            if swap >= len(a[j]):
                print(-1)
                exit()
        c += swap
    m = min(m, c)
print(m)