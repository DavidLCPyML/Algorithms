import sys
input = sys.stdin.readline

n = int(input())
inp = list(map(int,input().split()))

o, e = [i+1 for i in range(n) if inp[i] % 2], [i+1 for i in range(n) if inp[i] % 2 == 0]
print(o[0] if len(o) == 1 else e[0])