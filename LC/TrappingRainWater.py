height = list(map(int, input().split()))

ans = l = lmax = rmax = 0
r = len(height)-1

while l < r:
    if height[l] < height[r]:
        if height[l] > lmax:
            lmax = height[l]
        else:
            ans += lmax - height[l]
        l += 1
    else:
        if height[r] > rmax:
            rmax = height[r]
        else:
            ans += rmax - height[r]
        r -= 1
print(ans)
