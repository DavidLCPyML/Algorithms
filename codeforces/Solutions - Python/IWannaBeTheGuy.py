import sys
input = sys.stdin.readline

n = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))

win = [False] * n
for i in range(1, len(x)):
    win[x[i]-1] = True
for i in range(1, len(y)):
    win[y[i]-1] = True

print("I become the guy." if all(win) else "Oh, my keyboard!")