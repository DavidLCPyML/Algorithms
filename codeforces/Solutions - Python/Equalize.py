import sys
input = sys.stdin.readline

n = int(input())
a = list(input().strip())
b = list(input().strip())

cost = 0
i = 0
while i < n:
    if a[i] != b[i]:
        if i != n-1 and a[i+1] == b[i] and a[i] == b[i+1]:
            i += 1
        cost += 1
    i += 1
print(cost)