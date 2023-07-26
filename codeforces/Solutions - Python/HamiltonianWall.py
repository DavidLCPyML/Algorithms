import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n = int(input())
    wall = [input().strip() for _ in range(2)]

    c1, c2 = True, True
    for i in range(n):
        if wall[0][i] == wall[1][i]:
            c1, c2 = c2, c1
        elif wall[1][i] == 'B':
            c2 = False
        else:
            c1 = False
        
    ans.append("YES" if (c1 or c2) else "NO")

print(*ans, sep='\n')
