import sys
input = sys.stdin.readline

n, d = map(int,input().split())
songs = list(map(int,input().split()))

if sum(songs) + 10*(n-1) > d:
    print(-1)
else:
    print((d - sum(songs))//5)