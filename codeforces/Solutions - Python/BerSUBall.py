n  = int(input())
boys = sorted(map(int, input().split()))
m  = int(input())
girls = sorted(map(int, input().split()))
bs = 0
gs = 0
ans = 0
while bs < n and gs < m:
    if abs(boys[bs] - girls[gs]) <= 1:
        ans += 1
        bs += 1
        gs += 1
    elif girls[gs] - 2 >= boys[bs]:
        bs += 1
    else:
        gs += 1
print(ans)