dominoes = input().strip()

dominoes, res, i = "L" + dominoes + "R", "", 0
for j in range(len(dominoes)):
    if dominoes[j] == '.':
        continue
    mid = j-i-1
    if i:
        res += dominoes[i]
    if dominoes[i] == dominoes[j]:
        res += dominoes[i] * mid
    elif dominoes[i] == 'L' and dominoes[j] == 'R':
        res += '.' * mid
    else:
        res += 'R' * (mid//2) + '.' * (mid%2) + 'L' * (mid//2)
    i = j
print(res)