m,n = map(int, input().split())
p,q = map(int, input().split())

if (2 * m * n) < p * q:
    print('IMPOSSIBLE')
else:
    print(m * n * 2 - p * q)
