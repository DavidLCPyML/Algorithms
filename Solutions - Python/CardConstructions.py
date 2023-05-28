t = int(input())

# (3n^2 + n)/2
ans = []

for x in range(t):
    n = int(input())
    cnt = 0

    while n >= 2:
        i = 1
        while (3 * (i**2) + i) // 2 <= n:
            i += 1

        i -= 1
        n -= (3 * (i**2) + i) // 2
        cnt += 1
    ans.append(cnt)



print(*ans, sep='\n')