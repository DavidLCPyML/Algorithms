import sys
input = sys.stdin.readline

n = int(input())
s = input().strip()

alt_1 = ''.join(['0' if i % 2 == 0 else '1' for i in range(n)])
alt_2 = ''.join(['1' if i % 2 == 0 else '0' for i in range(n)])

# print(alt_1, alt_2)

miss_1, miss_2 = 0, 0
for i in range(n):
    if s[i] != alt_1[i]:
        miss_1 += 1
    if s[i] != alt_2[i]:
        miss_2 += 1
print(min(miss_1, miss_2))