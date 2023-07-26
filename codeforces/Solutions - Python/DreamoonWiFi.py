import sys
input = sys.stdin.readline
s1 = input()
s2 = input()

def recurse(i, pos1, pos2, maxlen):
    if i == maxlen:
        return 1 if pos1 == pos2 else 0
    
    pos1 = pos1 + 1 if s1[i] == '+' else pos1-1
    if s2[i] == '?':
        return recurse(i + 1, pos1, pos2 + 1, maxlen) + recurse(i + 1, pos1, pos2 - 1, maxlen)
    else:
        dpos = pos2 + 1 if s2[i] == '+' else pos2-1
        return recurse(i+1, pos1, dpos, maxlen)
combo = len([s2[i] for i in range(len(s2)) if s2[i] == '?'])

print(recurse(0, 0, 0, len(s1)) / 2**combo)