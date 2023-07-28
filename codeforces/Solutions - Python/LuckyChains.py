import sys
input = sys.stdin.readline

n = 10**7 + 1
sieve = [i for i in range(n)]
for i in range(2, n):
    if sieve[i] == i:
        for j in range(i*i, n, i):
            sieve[j] = min(sieve[j], i)


for _ in range(int(input())):
    a,b = map(int,input().split())

    if abs(a-b) == 1:
        print(-1)
    else:
        primes = []
        x = abs(a-b)
        while x > 1:
            if(not primes or primes[-1] != sieve[x]):
                primes.append(sieve[x])
            x //= sieve[x]
        
        ans = float('inf')
        for p in primes:
            ans = min(ans, (a + p - 1)//p * p)
        print(ans - a)