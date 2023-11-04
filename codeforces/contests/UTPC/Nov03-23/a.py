import sys
input = sys.stdin.readline

s = int(input())
for i in range(s):
    print('J' * (2*s-1))

for i in range(s):
    print(' '.join(['S']*s))

