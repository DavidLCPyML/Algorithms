import sys
input = sys.stdin.readline

s = input().strip()

run, b, ans = 0,0,0
for i in range(len(s)):
    if s[i] == 'o':
        b += run
    elif i>=1 and s[i-1] == 'v':
        run += 1
        ans += b
    
print(ans)