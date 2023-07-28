import sys
input = sys.stdin.readline

n = int(input())
kids = list(map(int,input().split()))

teams = [[] for i in range(3)]
for i, val in enumerate(kids):
    teams[val-1].append(i)

ans = list(zip(teams[0], teams[1], teams[2]))
print(len(ans))
for a in ans:
    print(a[0]+1, a[1]+1, a[2]+1)
