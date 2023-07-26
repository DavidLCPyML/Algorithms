import sys
input = sys.stdin.readline

s = list(map(int, list(input().strip())))
ans = len([i for i in s if not i%4])

for i in range(len(s)-1):
    if not (s[i] * 10 + s[i+1]) % 4:
        ans += (i+1)
print(ans)