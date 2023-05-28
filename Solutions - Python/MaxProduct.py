import sys
input = sys.stdin.readline
t = int(input())
ans = []

for _ in range(t):
    n = int(input())
    arr = sorted(map(int, input().split()))
    a = arr[-1] * arr[-2] * arr[-3] * arr[-4] * arr[-5]
    b = arr[0] * arr[1] * arr[-1] * arr[-2] * arr[-3]
    c = arr[0] * arr[1] * arr[2] * arr[3] * arr[-1]
    res = max(a,b,c)
    ans.append(res)
print(*ans, sep='\n')