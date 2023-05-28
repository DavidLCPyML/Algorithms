n = int(input())

if n == 0:
    dp = [1]
    print(dp)
elif n == 1:
    dp = [1,1]
    print(dp)
else:
    rowIndex = n
    pascal = [1]*(rowIndex + 1)
    for i in range(2,rowIndex+1):
        for j in range(i - 1, 0, -1):
            pascal[j] += pascal[j - 1]
    print(pascal)

    # prev = [1, 1]
    # for i in range(1, n):
    #     toadd = [1]
    #     for j in range(1, len(prev)):
    #         toadd.append(prev[j] + prev[j-1])
    #     toadd.append(1)
    #     prev = toadd
    # print(prev)