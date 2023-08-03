import sys
input = sys.stdin.readline

names = dict()
for _ in range(int(input())):
    s = input().strip()

    if s in names:
        names[s] += 1
        print(f'{s}{names[s]}')
    else:
        names[s] = 0
        print("OK")   