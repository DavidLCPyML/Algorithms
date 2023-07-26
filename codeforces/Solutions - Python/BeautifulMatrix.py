for i in range(5):
    l = input().split()
    if '1' in l:
        print(abs(2 - l.index('1')) + abs(2 - i))

print(sum(abs(2 - l.index('1')) + abs(2 - i) for i in range(5) for l in [input().split()] if '1' in l))
