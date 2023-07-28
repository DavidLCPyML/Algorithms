import sys
from math import gcd, lcm
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    ans, l, g = 1, 1, 0
    for i in range(n):
        a_i, b_i = map(int, input().split())
        g = gcd(g, a_i * b_i)
        l = lcm(b_i, l)
        if g % l != 0:
            ans += 1
            g, l = a_i * b_i, b_i
    print(ans)