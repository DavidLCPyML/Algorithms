# 192a
import sys
from bisect import bisect_left
input = sys.stdin.readline

n = int(input())
nums, i = [], 1
while i*(i+1)//2 < n:
    nums.append(i*(i+1)//2)
    i += 1

for j in nums:
    if n - j > nums[-1]:
        continue
    tmp = bisect_left(nums, n - j)
    if j + nums[tmp] == n:
        print("YES")
        exit()

print("NO")