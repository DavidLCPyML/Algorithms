nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))

longer, shorter = sorted((nums1, nums2), key=len)
a,b = len(longer), len(shorter)

lo, mid, hi = 0, (a + b - 1) // 2, a
while lo < hi:
    i = (lo + hi) // 2
    if mid-i-1 < 0 or longer[i] >= shorter[mid-i-1]:
        hi = i
    else:
        lo = i + 1
# i = lo
nextfew = sorted(longer[lo:lo+2] + shorter[mid-lo:mid-lo+2])
return (nextfew[0] + nextfew[1 - (a + b) % 2]) / 2.0