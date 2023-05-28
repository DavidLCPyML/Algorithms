import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

special = [4,8,15,16,23,42]
cnt = [0] * len(special)

for i in arr:
    if i == 4:
        cnt[0] += 1
    elif i in special:
        pos = special.index(i)
        if cnt[pos] < cnt[pos-1]:
            cnt[pos] += 1

    # print(*cnt)
print(n - 6*cnt[-1])
