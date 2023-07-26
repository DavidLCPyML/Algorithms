nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))

ans = i = 0
for j, val in enumerate(nums1):
    while i < len(nums2) and nums2[i] < val:
        i += 1
    if i == len(nums2):
        break
    ans = max(ans, j - i)

print(ans)