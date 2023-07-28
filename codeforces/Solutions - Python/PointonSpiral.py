# 279a
import sys
input = sys.stdin.readline

n, m = map(int, input().split())

# check quads
if n >= m and 1-n < m:
    print(4*n - 3)
elif n < m and n >= -m:
    print(4*m - 2)
elif n <= m and m < -n:
    print(4*abs(n)-1)
elif m == 0 and n == 0:
    print(0)
else:
    print(4*abs(m))