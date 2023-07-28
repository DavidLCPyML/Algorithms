#114a
import sys
input = sys.stdin.readline

k = int(input())
l = int(input())

cnt, tmp = 0, k
while l > tmp:
    tmp *= k
    cnt += 1

if l == tmp:
    print(f'YES\n{cnt}')
else:
    print("NO")