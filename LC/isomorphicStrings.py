import sys
input = sys.stdin.readline

s = input().strip()
t = input().strip()

print(len(set(s)) == len(set(t)) == len(set(zip(s, t))))