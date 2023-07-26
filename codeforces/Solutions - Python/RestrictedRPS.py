import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n = int(input())
    a,b,c = map(int, input().split())
    bob = input() #RPS
    wins = 0
    r, p, s = 0,0,0
    for char in bob:
        if char == 'S': s += 1
        if char == 'P': p += 1
        if char == 'R': r += 1
    
    a_wins = min(r, b) + min(p, c) + min(s, a)
    if a_wins * 2 < n:
        ans.append("NO")
    else:
        ans.append("YES")
        res = ['?' for i in range(n)]

        for i in range(n):
            if bob[i] == 'R' and b:
                res[i] = 'P'
                b -= 1
            elif bob[i] == 'P' and c:
                res[i] = 'S'
                c -= 1
            elif bob[i] == 'S' and a:
                res[i] = 'R'
                a -= 1
        for i in range(n):
            if res[i] == '?':
                if a:
                    res[i] = 'R'
                    a -= 1
                elif b:
                    res[i] = 'P'
                    b -= 1
                else:
                    res[i] = 'S'
                    c -= 1
        
        ans.append(''.join(res))

print(*ans, sep = '\n')