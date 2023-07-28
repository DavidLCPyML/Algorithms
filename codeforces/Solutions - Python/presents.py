import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

ans = [i for i in range(n)]
for i, v in enumerate(a):
    ans[v-1] = i+1

print(*ans)