import sys
input = sys.stdin.readline

n, k = map(int, input().split())
s = input()
letters = input().split()
ans = 0
run = 0
for i in s:
    if letters.count(i) != 0:
        run+=1
    else:
        ans += run*(run+1) // 2
        run = 0
print(ans)