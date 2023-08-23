n, k = map(int, input().split())
s = set(i for i in range(10))
bad = set(map(int, input().split()))
s -= bad

for i in range(n, 100001):
    if set(map(int, str(i))) <= s:
        print(i)
        break