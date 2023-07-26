import sys
input = sys.stdin.readline

bank = int(input())
if bank > 0:
    print(bank)
else:
    bank *= -1
    print(min(bank//10, (bank//100 * 10) + bank%10) * -1)