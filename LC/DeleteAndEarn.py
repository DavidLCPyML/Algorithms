import collections
from collections import Counter

nums = list(map(int, input().split()))

freq, prev, curr = collections.Counter(nums), 0, 0
maxval = max(nums or [0]) + 1

for i in range(maxval):
    prev, curr = curr, max(prev + i * freq[i], curr)
print(curr)