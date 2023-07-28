#456a
import sys
input = sys.stdin.readline

n = int(input())
laptops = sorted([list(map(int,input().split())) for i in range(n)])
a = sorted(laptops, key = lambda x : x[1])

print('Happy Alex' if laptops != a else 'Poor Alex')