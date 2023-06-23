arr = list(map(int, input().split()))

up, dn, res = 0, 0, 0
for i in range(1, len(arr)):
    if arr[i] == arr[i-1] or (dn and arr[i] > arr[i-1]):
        up = dn = 0
    up, dn = up + (arr[i] > arr[i-1]), dn + (arr[i] < arr[i-1])
    if up and dn: 
        res = max(res, up + dn + 1)

print(res)