import sys
input = sys.stdin.readline

for t in range(int(input())):
    a, src, tgt = input().split()

    num = 0
    for i in a:
        num *= int(len(src))
        num += int(src.index(i))
    
    ans = ""
    while num:
        ans += tgt[num % int(len(tgt))]
        num //= int(len(tgt))
    
    print(f'Case #{t+1}: {ans[::-1]}')

