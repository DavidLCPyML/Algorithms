import sys
input = sys.stdin.readline

ans = []
for i in range(int(input())):
    size = int(input())

    graph = [list(input().strip()) for i in range(size)]
    # print(*graph, sep = '\n')
    dp = [[False for _ in range(size)] for _ in range(size)]
    for i in range(size):
        dp[i][size-1] = True
        dp[size-1][i] = True

    flag = True

    for i in range(size-2, -1, -1):
        for j in range(size-2, -1, -1):
            if (graph[i][j] == '1' and graph[i][j+1] == '0') and (graph[i][j] == '1' and graph[i+1][j] == '0'):
                # illegal
                dp[i][j] = False
                flag = False
            else:
                dp[i][j] = dp[i][j+1] | dp[i+1][j]
    # print(*dp, sep = '\n')
    ans.append("YES" if flag else "NO")
print(*ans, sep = '\n')