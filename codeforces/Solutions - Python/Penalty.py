import sys
input = sys.stdin.readline

t = int(input())
ans = []
for case in range(t):
    s = list(input().strip())
    s1 = s.copy()
    # 1 team scores all the goals and the other scores none
    for i in range(len(s)):
        if s[i] == '?':
            if i % 2:
                s[i] = '1'
                s1[i] = '0'
            else:
                s[i] = '0'
                s1[i] = '1'
    a1 = 0
    b1 = 0
    a2 = 5
    b2 = 5
    i = 0
    while i < len(s):
        if i % 2:
            if s[i] == '1':
                a1 += 1
            if s1[i] == '1':
                a2 += 1
        else:
            if s[i] == '1':
                b1 += 1
            if s1[i] == '1':
                b2 += 1

        ga = (len(s) - i) // 2
        gb = (len(s) - i - 1) // 2

        if a1 + ga < b1: break
        if b1 + gb < a1: break
        if a2 + ga < b2: break
        if b2 + gb < a2: break
        i += 1
    ans.append((min(10, i+1)))

print(*ans, sep='\n')