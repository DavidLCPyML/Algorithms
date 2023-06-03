s = input().strip()

dp = {i: 1 for i in s}
currlen = 1

for i in range(len(s)):
    if i and (ord(s[i]) - ord(s[i-1])) % 26 == 1:
        currlen += 1
    else:
        currlen = 1
    dp[s[i]] = max(dp[s[i]], currlen)


print(dp)
print(sum(dp.values()))