import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    s = input().strip()
    t = input().strip()

    flag = True
    for i in range(len(s)):
        forward = s[:i+1] + s[:i][::-1]
        if t in forward:
            ans.append("YES")
            flag = False
            break
    if flag:
        ans.append("NO")

print(*ans, sep = '\n')