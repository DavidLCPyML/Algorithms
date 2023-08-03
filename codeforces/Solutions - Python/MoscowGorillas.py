import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

pos_a, pos_b = [0]*(n+1), [0]*(n+1)
for i in range(n):
    pos_a[a[i]] = i + 1
    pos_b[b[i]] = i + 1

la, ra, lb, rb = n, 1, n, 1
ans = 0
for i in range(1, n):
    la = min(la, pos_a[i])
    lb = min(lb, pos_b[i])
    ra = max(ra, pos_a[i])
    rb = max(rb, pos_b[i])

    min_la, min_lb, max_ra, max_rb = 0,0,0,0
    if pos_a[i+1] < la:
        min_la = pos_a[i+1] + 1
        max_ra = n
    else:
        max_ra = pos_a[i+1] - 1
        min_la = 1
    
    if pos_b[i+1] < lb:
        min_lb = pos_b[i+1] + 1
        max_rb = n
    else:
        max_rb = pos_b[i+1] - 1
        min_lb = 1

    ans += max(min(la, lb) - max(min_la, min_lb) + 1, 0) * max(min(max_ra, max_rb) - max(ra, rb) + 1, 0)

ans += min(pos_a[1], pos_b[1]) * (min(pos_a[1], pos_b[1]) - 1) // 2
ans += (n - max(pos_a[1], pos_b[1])) * (n - max(pos_a[1], pos_b[1]) + 1) // 2
ans += abs(pos_a[1] - pos_b[1]) * (abs(pos_a[1] - pos_b[1]) - 1) // 2
print(ans+1)