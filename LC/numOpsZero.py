num1, num2 = map(int, input().split())

runs = 0
while num1 != 0 and num2 != 0:
    if num1 > num2:
        num1 -= num2
    else:
        num2 -= num1
    runs += 1

print(runs)