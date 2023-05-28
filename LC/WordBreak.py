dp = [False]*(len(s) + 1)
dp[0] = True

for i in range(len(s)+1):
    for elem in dict:
        if len(elem) <= i and dp[i-len(elem)] and s[i-len(elem):i] == s:
            dp[i] = True
            break

for i in range(len(s)+1):
    for j in range(i):
        if dp[j] and s[j:i] in dict:
            dp[j] == True
            break


print dp[-1]