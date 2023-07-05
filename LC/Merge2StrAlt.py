a,b = map(str, input().split())

# a,b may not be the same length
len = min(len(a),len(b))
for i in range(len):
    print(a[i]+b[i], end='')
if len == len(a):
    print(b[len:])
else:
    print(a[len:])

# 1 liner
print(''.join([a[i]+b[i] for i in range(min(len(a),len(b)))]) + a[min(len(a),len(b)):] + b[min(len(a),len(b)):])

# cleaner 1 liner
from itertools import zip_longest
print(''.join([a+b for a,b in zip_longest(a,b,fillvalue='')]))