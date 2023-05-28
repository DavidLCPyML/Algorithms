s = input()
n = len(s)

def help(s, left, mid, right):
    while left >= 0 and right < n and s[left] == s[right]:
        left -= 1
        right += 1
    return s[left+1:right]

res = ""
for i in range(n):
    curr = help(s, i, i, i)
    if len(res) < len(curr):
        res = curr
    curr = help(s, i, i, i+1)
    if len(res) < len(curr):
        res = curr
print(res)