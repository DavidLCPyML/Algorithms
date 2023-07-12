n, k = map(int, input().split())
a = list(map(int, input().split()))
print(sum(1 for i in a if i >= sorted(a, reverse=True)[k-1] and i > 0))