nums = list(map(int, input().split()))

# 1 liner
print(eval('^'.join(map(str, nums))))

# full
x = 0
for i in nums:
    x ^= i
print(x)