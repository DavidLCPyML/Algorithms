import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    s = list(input().strip())

    replaced = [False for _ in range(len(s))]
    res = 0
    for i in range(1, len(s)):
        temp = False
        if s[i] == s[i-1] and not replaced[i-1]:
            temp = True
        if i > 1:
            if s[i] == s[i-2] and not replaced[i-2]:
                temp = True
        if temp:
            replaced[i] = True
            res += 1
        # print(s[i], i, temp)
    print(res)




# 7
# babba
# abaac
# codeforces
# zeroorez
# abcdcba
# bbbbbbb
# a
