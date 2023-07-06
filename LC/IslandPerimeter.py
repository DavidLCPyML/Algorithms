# def islandPerimeter(self, grid: List[List[int]]) -> int:

dirs = [[0,1],[0,-1],[1,0],[-1,0]]
row, col = len(grid), len(grid[0])

for i in range(row):
    for j in range(col):
        if grid[i][j]:
            return bfs(i,j)

def bfs(i,j):
    perimeter = 0
    queue = [(i, j)]
    visited = set()

    while queue:
        x, y = queue.pop(0)
        visited.add(x,y)

        for dir in dirs:
            newx, newy = x + dir[0], y + dir[1]

            if newx < 0 or newx == row or newy < 0 or newy == col or not grid[newx][newy]:
                perimeter += 1
            elif (newx, newy) not in visited:
                queue.append((newx, newy))
                visited.add((newx, newy))
    
    return perimeter
