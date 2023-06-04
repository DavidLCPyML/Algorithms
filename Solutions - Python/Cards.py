import sys
input = sys.stdin.readline

n = int(input())
s = input().strip()
a,b,c=sorted((s.count(x),x) for x in 'RGB')

if a[0] or b[0] > 1:
    print("BGR")
elif b[0] == 1 and c[0] > 1:
    ans = a[1]+b[1]
    print(''.join(sorted(ans)))
elif b[0] == 1 and c[0] == 1:
    print(a[1])
else:
    print(c[1])