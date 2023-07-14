# def orangesRotting(self, grid: List[List[int]]) -> int:

ans, fresh = 0, sum(grid[i][j] == 1 for i in range(len(grid)) for j in range(len(grid[0])))
queue = [(i, j, 0) for i in range(len(grid)) for j in range(len(grid[0])) if grid[i][j] == 2]

while queue:
    i, j, time = queue.pop(0)
    for x, y in [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]:
        if 0 <= x < len(grid) and 0 <= y < len(grid[0]) and grid[x][y] == 1:
            grid[x][y], ans = 2, time+1
            queue.append((x, y, ans))
            fresh -= 1
print(ans if fresh == 0 else -1)