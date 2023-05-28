t = int(input())
ans = []

for i in range(t):
    s = input()
    one = -1
    two = -1
    three = -1
    res = 1e9
    index = 1
    for j in range(len(s)):
        # update the values (1 indexed)
        if s[j] == '1':
            one = index
        elif s[j] == '2':
            two = index
        else:
            three = index
        # perform the check
        if one > 0 and two > 0 and three > 0:
            res = min(res, max(one, two, three) - min(one, two, three) + 1)
        index += 1

    if res == 1e9:
        ans.append(0)
    else:
        ans.append(res)

print(*ans, sep='\n')

# pranay's solution
# for _ in range(int(input())):
#     s = input()
#     n = len(s)
#     ans = float('inf')
#     idx = [0, 0, 0]
#     for i in range(n):
#         idx[int(s[i]) - 1] = i + 1
#         if (0 not in idx):
#             ans = min(ans, max(idx) - min(idx) + 1)
#     print(ans if ans != float('inf') else 0)