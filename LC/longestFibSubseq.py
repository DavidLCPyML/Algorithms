arr = list(map(int, input().split()))

n, s, ans = len(arr), set(arr), 2
for i in range(n):
    for j in range(i+1, n):
        a, b, currl = arr[i], arr[j], 2
        while a + b in s:
            a, b, currl = b, a+b, currl+1
        if currl > 2:
            ans = max(ans, currl)
print(ans if ans >= 3 else 0)