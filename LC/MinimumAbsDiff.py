from collections import defaultdict
arr = list(map(int, input().split()))

minDiff, ans = float('inf'), defaultdict(list)
arr.sort()
for i in range(len(arr)-1):
    diff = abs(arr[i] - arr[i+1])
    ans[diff].append((arr[i], arr[i+1]))
    minDiff = min(minDiff, diff)
print(ans[minDiff])

# 1 liner
arr.sort() or (diff := min(b-a for a, b in zip(arr, arr[1:]))) and None or [[a, b] for a, b in zip(arr, arr[1:]) if b-a == diff]