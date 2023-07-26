import sys
input = sys.stdin.readline

n = int(input())
s = sorted(input().strip())
m = sorted(input().strip())

lose, win = 0,0
for i in m:
    if i >= s[lose]:
        lose += 1
    if i > s[win]:
        win += 1

print(n - lose, win, sep = '\n')