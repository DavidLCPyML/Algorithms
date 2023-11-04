import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

# i hate my life
# i hate my life
# i hate my life
# i hate my life
# i hate my life
# i hate my life
# i hate my life
# i hate my life
# i hate my life
# i hate my life
# i hate my life

def solve():
    if sum(a) % 2 == 1:
        return n
    first_odd = -1
    for i in range(n):
        if a[i] % 2 == 1:
            first_odd = i
            break
    last_odd = -1
    for i in range(n-1, -1, -1):
        if a[i] % 2 == 1:
            last_odd = i
            break
    if first_odd == -1 or last_odd == -1:
        return -1
    return max(n - first_odd - 1, last_odd)

print(solve())