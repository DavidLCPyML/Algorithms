import sys
input = sys.stdin.readline

n = int(input())
a, b = [], []
for _ in range(n):
    a_i, b_i = map(int, input().split())
    a.append(a_i)
    b.append(b_i)

ans = 0
for i in range(n):
    for j in range(n):
        if i != j and a[i] == b[j]:
            ans += 1
            break

print(n - ans)