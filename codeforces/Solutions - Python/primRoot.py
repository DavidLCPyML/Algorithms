# 284a
import sys
from math import gcd
input = sys.stdin.readline

p = int(input())

# prim roots = φ(φ(p)) = φ(p-1) as p is always prime
ans = 0
for i in range(1, p):
    if gcd(p-1, i) == 1:
        ans += 1

print(ans)

