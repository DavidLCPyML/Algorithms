import sys
input = sys.stdin.readline

dict = {"polycarp" : 1}
chain = 1

for _ in range(int(input())):
    a, _, b = map(lambda x: x.lower(), input().split())
    dict[a] = dict[b] + 1
    chain = max(chain, dict[a])

print(chain)