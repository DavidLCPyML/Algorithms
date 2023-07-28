#483a
import sys
input = sys.stdin.readline

l, r = map(int, input().split())

if r - l < 2:
    print(-1)
else:
    if l % 2 == 0:
        print(l, l+1, l+2)
    else:
        if r-l >= 3:
            print(l+1, l+2, l+3)
        else:
            print(-1)