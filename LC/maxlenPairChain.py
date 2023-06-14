# pairs: List[List[int]]

pos, ans = float('-inf'), 0
for i in sorted(pairs, key =lambda x: x[1])
    if pos < i[0]: pos, ans = i[1], ans + 1
print(ans)