s = input()

def isPalin(s):
    n = len(s)
    for i in range(n // 2):
        if s[i] != s[n-1-i]:
            return False

    return True

def getstrings(substr, ans, s):
    if s == "":
        ans.append(substr)
        return
    for i in range(1, len(s) + 1):
        temp = s[0:i]
        if not isPalin(temp):
            continue
        else:
            getstrings(substr + [s[:i]], ans, s[i:len(s)])
    
    return

if s == "":
    print("nothing here")
else:
    ans = []
    currstr = []
    getstrings(currstr, ans, s)

    print(ans)

# better:
# if not s:
#     return [[]]
# ans = []
# for i in range(1, len(s)+1):
#     if s[:i] == s[:i][::-1]:
#         for j in self.partition(s[i:]):
#             ans.append([s[:i]]+j)
# return ans