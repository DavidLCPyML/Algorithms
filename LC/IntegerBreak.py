n = int(input())

rem = [1, 4, 2]
if n < 4:
    print(n-1)
elif n % 3 != 1:
    print(3**(n//3) * rem[n % 3])
else:
    print(3**(n//3-1) * rem[n % 3])