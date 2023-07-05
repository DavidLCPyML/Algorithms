num1, num2 = map(int, input().split())

runs = 0
while num1 != 0 and num2 != 0:
    if num1 > num2:
        num1 -= num2
    else:
        num2 -= num1
    runs += 1

print(runs)

# 1 liner recursive
# class Solution:
#     def countOperations(self, num1: int, num2: int) -> int:
#         return 1 + self.countOperations(max(num1, num2) - min(num1, num2), min(num1, num2)) if num1*num2 else 0