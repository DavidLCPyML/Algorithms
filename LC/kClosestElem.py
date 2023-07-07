arr = list(map(int, input().split()))
k, x = map(int, input().split())

l, h = 0, len(arr) - k
while l < h:
    mid = l + (h - l) // 2
    if x - arr[mid] > arr[mid + k] - x:
        l = mid + 1
    elif x - arr[mid] <= arr[mid + k] - x:
        h = mid
print(arr[l:l + k])