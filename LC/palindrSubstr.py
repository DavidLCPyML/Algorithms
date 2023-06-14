s = input().strip()

n, cnt = len(s), 0
for i in range(2*n):
    l, r = i//2, i//2 + i % 2

    while l >= 0 and r < n and s[l] == s[r]:
        cnt += 1
        l,r = l-1, r+1
print(ans)