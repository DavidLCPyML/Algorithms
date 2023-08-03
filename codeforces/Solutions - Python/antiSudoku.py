import sys
input = sys.stdin.readline

for i in range(int(input())):
    grid = [input().strip() for _ in range(9)]

    for i in range(9):
        grid[i] = grid[i].replace('1', '9')
    
    print(*grid, sep = '\n')