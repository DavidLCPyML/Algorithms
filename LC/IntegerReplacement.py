n = int(input())

ans = 0
while n > 1:
    if not n % 2:
        n //= 2
    else:
        if n % 4 == 3 and n != 3:
            n += 1
        else:
            n -= 1
    ans += 1

print(ans)
        