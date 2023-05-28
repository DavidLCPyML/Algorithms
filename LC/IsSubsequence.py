s = input()
t = input()

sInd = 0
tInd = 0
while sInd < len(s) and tInd < len(t):
    print(s[sInd], t[tInd])
    if s[sInd] == t[tInd]:
        sInd += 1
    tInd += 1

print(sInd, len(s))

print("true" if sInd == len(s) else "false")