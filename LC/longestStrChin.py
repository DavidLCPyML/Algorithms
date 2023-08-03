words = list(input().split())
dp = {}
for w in sorted(words, key=len):
    for i in range(len(w)):                
        dp[w] = max(dp.get(w[:i] + w[i + 1:], 0) + 1 for i in range(len(w)))

print(max(dp.values()))