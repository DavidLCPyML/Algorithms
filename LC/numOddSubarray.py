arr = list(map(int, input().split()))

ans, MOD = 0, 10**9 + 7
odd = even = 0

for i in arr:
    even = even + 1
    if i % 2:
        even, odd = odd, even
    ans = (ans + odd) % MOD

print(ans)