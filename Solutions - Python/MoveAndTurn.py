moves = int(input())
up = moves // 2
if not moves % 2:
    print((up + 1)**2)
else:
    print(2*(up+1)*(up+2))
