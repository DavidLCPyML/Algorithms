import math

t = int(input())
for i in range(t):
    n = int(input())
    r = list(map(int, input().split()))
    # print(r)
    m = int(input())
    b = list(map(int, input().split()))
    # print(b)

    for i in range(1, n):
        r[i] += r[i-1]
    for i in range(1, m):
        b[i] += b[i-1]
    print(max(0, max(r)) + max(0, max(b)))
