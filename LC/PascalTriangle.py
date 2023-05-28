n = int(input())

if n==1:
    dp = [[1]]
    print(dp)
elif n == 2:
    dp = [[1], [1,1]]
    print(dp)
else:
    dp = [[1], [1, 1]]
    for i in range(2, n):
        lis = [1]
        for j in range(i - 1):
            lis.append(dp[i-1][j] + dp[i-1][j + 1])
        lis.append(1)
        dp.append(lis)
    print(dp)

    # dp = [[1], [1,1]]
    # for i in range(2, n):
    #     prev = dp[i-1]
    #     toadd = [1]
    #     for j in range(1, len(prev)):
    #         toadd.append(prev[j] + prev[j-1])
    #     toadd.append(1)
    #     dp.append(toadd)
    #     toadd = prev
    # print(dp)