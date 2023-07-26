# https://codeforces.com/problemset/problem/1769/C1
import sys
input = sys.stdin.readline

ans= []
for _ in range(int(input())):
    n = int(input())
    days = list(map(int, input().split()))

    res = 0
    for i in range(days[0], days[n-1]+1):
        last = i
        for j in range(n):
            last += 1 if days[j] == last or days[j] == last-1 else 0
        res = max(res, last - i)
    ans.append(res)

print(*ans, sep='\n')