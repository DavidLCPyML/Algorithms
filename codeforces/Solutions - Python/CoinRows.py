import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    m = int(input())
    board = [list(map(int, input().split())) for i in range(2)]

    # print(*board, sep = '\n')
    if m == 1:
        ans.append(0)
        continue

    forward = sum(board[0])
    backward = 0
    res = forward

    for i in range(m):
        forward -= board[0][i]
        res = min(res, max(forward, backward))
        backward += board[1][i]
    ans.append(res)

print(*ans, sep ='\n')