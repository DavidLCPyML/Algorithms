import math

t = int(input())

while t > 0:
    t-= 1
    n,m,x,y = map(int, input().split())

    parentlist = []
    for i in range(0, n):
        parentlist.append(input())

    ans = 0
    for i in parentlist:
        # determine if it is cheaper to buy all 1x1s or if we need to do 2x1s
        whites = i.count('.')
        if y / 2 > x:
            ans += whites * x
        else:
            # print("normal case")
            streak = 0
            for char in i:
                if char == '.':
                    streak += 1
                else:
                    ans += (y * math.floor(streak/2)) + x * (streak % 2)
                    streak = 0
            ans += (y * math.floor(streak/2)) + x * (streak % 2)
    print(ans)

