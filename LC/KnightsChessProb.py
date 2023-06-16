n, k, r, c = map(int, input().split())

if not k: print(1.0); exit()
dp = [[0]*n for _ in range(n)]
dp[r][c] = 1
dirs = [[1,2],[1, -2],[-1, 2],[-1, -2], [2, 1], [2, -1],[-2,1],[-2,-1]]

for i in range(1, k+1):
    curr = [[0]*n for _ in range(n)]
    for row in range(n):
        for col in range(n):
            for dir in dirs:
                nxtx, nxty = row + dir[0], col + dir[1]
                if nxtx < 0 or nxty < 0 or nxtx >= n or nxty >= n: 
                    continue
                curr[row][col] += dp[nxtx][nxty]

    dp = curr

rec = sum([sum(i) for i in dp])
print(rec / 8**k)