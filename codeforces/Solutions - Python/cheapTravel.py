import sys
from math import ceil
input = sys.stdin.readline

n,m,a,b = map(int, input().split())
print(min(n*a, (n//m)*b + (n%m)*a, ceil(n/m)*b))