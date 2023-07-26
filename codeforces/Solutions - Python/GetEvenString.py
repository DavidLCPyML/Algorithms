import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    s = list(input().strip())
    # print(s)

    res = 0
    curr_run = 0
    prev = [False for i in range(0, 26)]

    for i in range(len(s)):
        if prev[ord(s[i]) - ord('a')]:
            res += curr_run - 1
            prev[:] = [False for _ in prev]
            curr_run = 0
        else:
            curr_run+=1
            prev[ord(s[i]) - ord('a')] = True

    ans.append(res + curr_run)

print(*ans, sep = '\n')