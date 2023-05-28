import sys
input = sys.stdin.readline

ans = []
for _ in range(int(input())):
    n, q = map(int, input().split())
    strengths = list(map(int, input().split()))

    odd = [0]*(n+1)
    even = [0]*(n+1)
    odd[0] = -sys.maxsize - 1
    for i in range(1, n+1):
        odd[i] = max(odd[i-1], even[i-1] + strengths[i-1])
        even[i] = max(even[i-1], odd[i-1] - strengths[i-1])
    ans.append(max(odd[-1], even[-1]))

print(*ans, sep='\n')