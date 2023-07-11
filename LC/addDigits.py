num = int(input())

while(num > 9):
    num = sum([int(i) for i in str])

def addDigits(num):
    return 1 + (num - 1) % 9 if num else 0

print(num % 9 if (num % 9 or num == 0) else 9)