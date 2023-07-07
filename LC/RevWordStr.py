s = input().strip()

print(' '.join([word[::-1] for word in s.split()]))