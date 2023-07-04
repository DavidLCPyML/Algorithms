nums = list(map(int, input().split()))

first, second = 0, 0
for i in nums:
    first = (first ^ i) & ~second
    second = (second ^ i) & ~first
    print(first, second)

print(first)
print(second)