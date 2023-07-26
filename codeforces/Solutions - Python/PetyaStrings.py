# a = input().strip()
# b = input().strip()
# print(0 if a.lower() == b.lower() else 1 if a.lower() > b.lower() else -1)

print(0 if (a := input().strip().lower()) == (b := input().strip().lower()) else 1 if a > b else -1)