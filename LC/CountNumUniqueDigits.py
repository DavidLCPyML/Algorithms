n = int(input())

if n == 0: print(1)
else:
    ans, nums = 10, 9
    for i in range(1, n):
        nums *= (10-i)
        ans += nums

    print(ans)