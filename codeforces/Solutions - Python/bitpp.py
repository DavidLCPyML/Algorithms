# x = 0
# for _ in range(int(input())):
#     x += 1 if '++' in input().strip() else -1
# print(x)

print(sum(1 if '++' in input().strip() else -1 for _ in range(int(input()))))