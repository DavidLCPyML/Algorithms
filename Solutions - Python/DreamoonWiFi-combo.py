from math import comb
import sys
input = sys.stdin.readline

s1 = input()
s2 = input()
q = s2.count('?')
d = s1.count('+') - s2.count('+')
print(0 if q < d or d < 0 else comb(q, d) / (2**q))