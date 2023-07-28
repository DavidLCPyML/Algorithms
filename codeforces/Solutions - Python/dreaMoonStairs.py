import sys
input = sys.stdin.readline

n, m = map(int,input().split())

if n < m:
    print(-1)
else:
    moves = n//2 + (n%2)
    while moves % m:
        moves += 1
    print(moves)