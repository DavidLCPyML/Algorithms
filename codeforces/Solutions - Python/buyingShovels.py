from math import sqrt
import sys
input = sys.stdin.readline
 
 
for i in range(int(input())):
    n, k = map(int, input().split())
    if n <= k:
        print(1)
    else:
        ans = n
        for i in range(1, int(sqrt(n))+1):
            if n % i == 0:
                ans = min(ans, i) if n // i <= k else ans
                ans = min(ans, n // i) if i <= k else ans
        print(ans)