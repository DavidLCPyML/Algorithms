n = int(input())

def digsum(x):
    sum = 0
    while (x):
        sum += x % 10
        x //= 10
    return sum

curr = 18
while (n):
    curr += 1
    if digsum(curr) == 10:
        n -= 1
        # print(curr)

print(curr)