#416A
import sys
input = sys.stdin.readline

n = int(input())
l, r = float('-inf'), float('inf') 
for i in range(n):
    q = input().split()
    q[1] = int(q[1])
    
    if q[0] == ">":
        if q[2] == "Y":
            l = max(l, q[1] + 1)
        else:
            r = min(r, q[1])
    elif q[0] == "<":
        if q[2] == "Y":
            r = min(r, q[1] - 1)
        else:
            l = max(l, q[1])
    elif q[0] == "<=":
        if q[2] == "Y":
            r = min(r, q[1])
        else:
            l = max(l, q[1] + 1)
    elif q[0] == ">=":
        if q[2] == "Y":
            l = max(l, q[1])
        else:
            r = min(r, q[1] - 1)

if l <= r:
    print(l if l != float('-inf') else r)
else:
    print("Impossible")