# mat = some 2d matrix of 1s and 0s

m, n = len(mat), len(mat[0])
for r in range(m):
    for c in range(n):
        if mat[r][c]:
            up = mat[r - 1][c] if r else float('inf')
            left = mat[r][c - 1] if c else float('inf')
            mat[r][c] = min(up, left) + 1

for r in range(m - 1, -1, -1):
    for c in range(n - 1, -1, -1):
        if mat[r][c] > 0:
            down = mat[r + 1][c] if r < m - 1 else float('inf')
            right = mat[r][c + 1] if c < n - 1 else float('inf')
            mat[r][c] = min(mat[r][c], down + 1, right + 1)

return mat