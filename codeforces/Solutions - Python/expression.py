a = int(input())
b = int(input())
c = int(input())

if a == 1:
    if b == 1:
        if c == 1:
            print(3)
        else:
            print(2*c)
    else:
        if c == 1:
            print(b+2)
        else:
            print((b+1)*c)
else:
    if b == 1:
        if c == 1:
            print(2*a)
        else:
            print(max((a+1)*c, a * (c+1)))
    else:
        if c == 1:
            print(a * (b+1))
        else:
            print(a*b*c)