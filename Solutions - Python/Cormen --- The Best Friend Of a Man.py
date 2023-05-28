import math

n, k = map(int, input().split())
days = list(map(int, input().split()))

ans = 0
for i in range(1, n):
    if days[i] + days[i-1] < k:
        ans += k - days[i] - days[i-1]
        days[i] = k - days[i-1]

print(ans)
print(*days)