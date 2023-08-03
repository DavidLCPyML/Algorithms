import sys
input = sys.stdin.readline

n, m = map(int, input().split())

# kmax = all teams have 1 except for 1 team
# kmin = all teams are as equal as possible
kmax, kmin = 0, 0
if n == m:
    kmax, kmin = 0, 0
else:
    kmax = (n-m+1)*(n-m)//2
    group = n // m
    kmin = (n % m) * (group+1)*group//2 + (m- (n%m)) * group * (group-1) //2

print(kmin, kmax)