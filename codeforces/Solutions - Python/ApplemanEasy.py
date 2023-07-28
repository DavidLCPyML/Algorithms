import sys
input = sys.stdin.readline

n = int(input())
grid = [list(input().strip()) for i in range(n)]
dirs = [(1, 0), (-1, 0), (0, 1), (0, -1)]


ans = True
for i in range(n):
    for j in range(n):
        valid = []
        for dir in dirs:
            if i+dir[0] < 0 or i+dir[0] >= n or j+dir[1] < 0 or j+dir[1] >= n:
                continue
            valid.append(grid[i+dir[0]][j+dir[1]])
        
        if valid.count('o') % 2:
            ans = False
            break

print('YES' if ans else 'NO')
        