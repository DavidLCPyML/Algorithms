import sys
input = sys.stdin.readline

t = int(input())
pairs = []
while t > 0:
    t -= 1
    a, b = input().split()
    a = int(a)
    pairs.append((a, b))

pairs.sort(key=lambda x: x[0])
print(" ".join([pair[1] for pair in pairs]))