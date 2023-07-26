dist = list(map(int, input().split()))
hour = int(input())

l, h, n = 1, 10 ** 7 + 1, len(dist)
while l < h:
    speed = l + (h - l) // 2
    need = dist[-1] / speed + sum((dist[i] + speed - 1) // speed for i in range(n - 1))
    if need > hour:
        l = speed + 1
    else:
        h = speed
print(-1 if l == 10 ** 7 + 1 else l)