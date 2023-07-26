import sys, string
input = sys.stdin.readline

s = list(input())

for i in range(1, len(s)-1):
    if s[i-1] == s[i]:
        for j in string.ascii_lowercase:
            if j != s[i-1] and j != s[i+1]:
                s[i] = j
                break

print(''.join(s))
