asteroids = list(map(int, input().split()))

stk = []
for i in asteroids:
    if i > 0 and stk:
        stk.append(i)
    else:
        while stk and stk[-1] > 0 and stk[-1] < abs(i):
            stk.pop()
        if stk and stk[-1] == -i:
            stk.pop()
        elif not stk or stk[-1] < 0:
            stk.append(i)
print(*stk)