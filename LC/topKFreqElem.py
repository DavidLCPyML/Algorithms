import sys
input = sys.stdin.readline

nums = list(map(int, input().split()))
k = int(input())

freq = dict()
for i in nums:
    if i not in freq:
        freq[i] = 0
    freq[i] += 1

freqs, ans = [[] for _ in range(len(nums) + 1)], []
for i in freq.items():
    freqs[i[1]].append(i[0])

for i in freqs[::-1]:
    if len(i):
        ans += i
    if len(ans) >= k:
        break
print(ans)