n = int(input())
coins = list(map(int, input().split()))
sum = sum(coins)
dp = -1
for i in range(n):
    for j in range(i, n):
        temp = sum
        for s in range(i, j + 1):
            temp += 1 if coins[s] == 0 else -1
        dp = max(temp, dp)
print(dp)