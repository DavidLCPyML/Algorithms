import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n, k = map(int, input().split())
    nums = sorted(map(int, input().split()))

    count = sum(nums[0:n-2*k])
    for i in range(n-1, n-1-k, -1):
        count += nums[i-k] // nums[i]
    ans.append(count)

print(*ans, sep ='\n')