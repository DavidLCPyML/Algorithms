import sys
input = sys.stdin.readline

def check(a, n):
    for i in range(n-1):
        for j in range(n-1):
            if a[i][j] == '1' and a[i+1][j] == '0' and a[i][j+1] == '0':
                return 0
    return 1

for _ in range(int(input())):
    n = int(input())
    a = [input() for _ in range(n)]
    print('YES' if check(a, n) else 'NO')