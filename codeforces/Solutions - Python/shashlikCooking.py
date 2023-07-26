import sys
input = sys.stdin.readline

n, k = map(int, input().split())
step = 2*k+1
ans = []
if (n % step < k+1 and n % step):
        for i in range(1, n+1, step):
            ans.append(i)
else:
        for i in range(k+1, n+1, step):
            ans.append(i)
print(len(ans))
print(*ans)
