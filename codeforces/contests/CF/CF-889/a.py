import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))

    swaps = 0
    for i in range(n):
        if arr[i] == i+1:
            swaps += 1
    
    print((swaps+1) // 2)