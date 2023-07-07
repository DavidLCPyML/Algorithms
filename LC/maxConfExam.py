answerkey = input().split()
k = int(input())

freq = i = 0
cnt = Counter()
for j, a in enumerate(answerkey):
    cnt[a] += 1
    freq = max(freq, cnt[a])
    if j - i + 1 > freq + k:
        cnt[a] -= 1
        i += 1
print(len(s) - i)