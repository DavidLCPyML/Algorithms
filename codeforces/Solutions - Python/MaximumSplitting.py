import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    fail = [5,7,11] + list(range(3))
    if n in fail:
        print(-1)
    else:
        print(n // 4 - n % 2)