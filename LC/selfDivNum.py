left, right = map(int, input().split())

print([i for i in range(left, right+1) if all([int(c) and not i % int(c) for c in set(str(i))])])
