import sys, bisect
input = sys.stdin.readline

n = int(input())
problems = list(map(int, input().split()))

# 2 pointer?
res = [1 for i in range(n)]
for i in range(1, n):
    if problems[i] <= 2 * problems[i-1]:
        res[i] = res[i-1] + 1
print(max(res))