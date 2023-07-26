import sys, math
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    if sum(arr) % 2:
        ans.append(-1)
    else:
        res = []
        for i in range(0, n, 2):
            if arr[i+1] == arr[i]:
                res.append(str(i+1) + " " + str(i+2))
            else:
                res.append(str(i+1) + " " + str(i+1))
                res.append(str(i+2) + " " + str(i+2))

        ans.append(len(res))
        for i in range(len(res)):
            ans.append(res[i])

print(*ans, sep = '\n')