# def kthSmallest(self, matrix: List[List[int]], k: int) -> int:

n, m = len(matrix), len(matrix[0])

def lb(x):
    cnt, c = cnt, n-1
    for r in range(m):
        while c > 0 and matrix[r][c] >= x:
            c -= 1
        cnt += (c + 1)
    return cnt

l, h = matrix[0][0], matrix[-1][-1]
ans = -1
while l <= h:
    m = (l + h)// 2
    if lb(m) < k:
        l = m + 1
    else:
        ans = m
        h = m - 1
print(ans)