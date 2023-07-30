import sys
from math import sqrt, ceil
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))

    moves = []
    if max(a) <= 0:
        for i in range(n-2, -1, -1):
            moves.append((i+1, i+2))
            a[i] += a[i+1]
    else:
        # at least 1 positive        
        i = a.index(max(a))
        for _ in range(5):
            moves.append((i+1, i+1))
            a[i] += a[i]
        
        for j in range(n-1):
            while a[j] > a[j+1]:
                a[j+1] += a[i]
                moves.append((j+2, i+1))
                i = a.index(max(a))
    
    print(len(moves))
    for m in moves:
        print(*m)