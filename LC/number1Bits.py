n = int(input())

bin(n).count('1')
# or
cnt = 0
while n:
    cnt += n & 1
    n >>= 1
print(cnt)
# or
print(n.bit_count())
# or without any built-in functions
print(sum(1 & n >> i for i in range(n.bit_length())))