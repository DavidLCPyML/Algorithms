a, b = map(str, input().split())

print(f'{int(a, 2) + int(b, 2):b}')
# or
bin(int(a,2)+int(b,2))[2:]