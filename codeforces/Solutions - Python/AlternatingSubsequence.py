t = int(input())
ans = []
for i in range(t):
    n = int(input())
    seq = list(map(int, input().split()))
    sum = 0
    i = 0
    while i < n:
        j = i
        sign = 1 if seq[i] > 0 else -1
        while j < n and seq[j] * sign > 0:
            j += 1
        sum += max(seq[i:j])
        i = j
    ans.append(sum)
print(*ans, sep = '\n')