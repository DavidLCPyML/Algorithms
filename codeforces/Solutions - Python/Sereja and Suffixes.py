n, m = map(int, input().split())
nums = list(map(int, input().split()))

uniques = set()
vals = [0 for i in range(len(nums))]

for i in reversed(range(n)):
    uniques.add(nums[i])
    vals[n - 1 - i] = len(uniques)

ans = []
for i in range(m):
    x = int(input())
    ans.append(vals[n-x])

print(*ans, sep='\n')