n = int(input())
primes = list(map(int, input().split()))

dp, indexes, found = [1], [0] * len(primes), [1] * len(primes)
add = 1

for i in range(1, n):
    for j in range(len(primes)):
        if add == found[j]:
            found[j] = dp[indexes[j]] * primes[j]
            indexes[j] += 1
    add = min(found)
    dp.append(add)

    print("dp: ", dp, "found: ", found)

print(dp)