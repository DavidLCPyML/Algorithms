num = input().strip()

for i in range(len(num) - 1, -1, -1):
    if int(num[i]) % 2 == 1:
        print(num[:i + 1])
        break
print("")

# 1 liner
print(num[:next((i for i in range(len(num) - 1, -1, -1) if int(num[i]) % 2 == 1), -1) + 1])

# 1 liner
print(num.rstrip("02468"))