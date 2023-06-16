s = list(input().strip())

minopen = maxopen = 0
for i in s:
    maxopen = maxopen - 1 if i == ')' else maxopen + 1
    minopen = minopen + 1 if i == '(' else max(minopen - 1, 0)
    if maxopen < 0: print(False); exit()
print(minopen == 0)
