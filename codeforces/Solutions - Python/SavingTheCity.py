import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    a,b = map(int, input().split())
    city = list(map(int, list(input().strip())))
    
    first = 0
    while first < len(city) and city[first] == 0:
        first += 1
    
    zeros = sys.maxsize
    res = 0
    for i in range(first, len(city)):
        if city[i] == 1:
            res += min(a, b * zeros)
            zeros = 0
        else:
            zeros += 1

    ans.append(res)

print(*ans, sep='\n')