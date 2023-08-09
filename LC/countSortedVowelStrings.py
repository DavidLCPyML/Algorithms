import sys
input = sys.stdin.readline
from math import comb

n = int(input())
print(comb(n+4, 4))