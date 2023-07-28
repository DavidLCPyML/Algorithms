import sys
input = sys.stdin.readline

letters = set()
s = input().strip()
for c in s:
    if c in " ,{}":
        continue
    letters.add(c)

print(len(letters))