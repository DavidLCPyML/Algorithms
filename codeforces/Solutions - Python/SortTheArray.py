import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

start, end, sorted_a = 0, n-1, sorted(a)

if a == sorted_a:
    print("yes \n 1 1")
else:
    while a[start] == sorted_a[start]:
        start += 1
    while a[end] == sorted_a[end]:
        end -= 1

    if a[start:end+1] == sorted_a[start:end+1][::-1]:
        print("yes\n", start+1, end+1)
    else:
        print("no")