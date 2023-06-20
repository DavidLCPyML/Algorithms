n = int(input())

cnt = 0
for i in range(n+1):
    s = i % 10
    if s == 3 or s == 4 or s == 7:
        continue
    if s==2 or s==5 or s ==6 or s==9:
        cnt += 1

print(cnt)