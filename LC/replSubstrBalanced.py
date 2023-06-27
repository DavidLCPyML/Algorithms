s = input().strip()

count = collections.Counter(s)
res, n, i = len(s), len(s), 0
for j, c in enumerate(s):
    count[c] -= 1
    while i < n and all(n / 4 >= count[c] for c in 'QWER'):
        if i > j: return 0
        res, count[s[i]] = min(res, j - i + 1), count[s[i]] + 1
        i += 1
return res