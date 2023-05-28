n = int(input())
stones = list(map(int, input().split()))
m = int(input())

sorted_stones = sorted(stones)
for i in range(1, len(sorted_stones)):
    sorted_stones[i] += sorted_stones[i-1]
for i in range(1, len(stones)):
    stones[i] += stones[i-1]

# print(stones)
# print(sorted_stones)
ans = []

for i in range(m):
    type, l, r = map(int, input().split())
    if type == 1:
        if l == 1:
            ans.append(stones[r-1])
        else:
            ans.append(stones[r-1] - stones[l-2])
    else:
        if l == 1:
            ans.append(sorted_stones[r-1])
        else:
            ans.append(sorted_stones[r-1] - sorted_stones[l-2])

print(*ans, sep='\n')