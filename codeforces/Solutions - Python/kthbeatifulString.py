import sys
input = sys.stdin.readline

for i in range(int(input())):
    n, k = map(int, input().split())

    i, ans = 0, ''
    while i < n and i*(i+1)//2 <= k:
        i += 1
    
    
    print(ans)
    # print(i*(i-1)//2, i*(i+1)//2)
    # ans = 'a'*(n-i-1) + 'b' + 'a'*(i*(i+1)//2 - k) + 'b'
    # print(ans)
