import sys
input = sys.stdin.readline

ans = []
n = int(input())
nums = list(map(int, input().split()))

for i in nums:
    val = 32
    for add in range(16):
        x = i + add
        res = 0
        while x % 32768:
            res += 1
            x = x * 2 % 32768
        val = min(val, add + res)
    print(val)
