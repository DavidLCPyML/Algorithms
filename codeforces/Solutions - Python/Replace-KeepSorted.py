import sys
input = sys.stdin.readline

n,q,k = map(int, input().split())
arr = list(map(int, input().split()))
ans = []
for _ in range(q):
    l, r = map(int, input().split())
    left_arrs = arr[l-1]-1
    right_arrs = k - arr[r-1]
    middle_arrs = (arr[r-1] - arr[l-1] + 1 - (r - l + 1)) * 2    # for each empty space, can replace either of 2 elems  
    ans.append(k + arr[r-1] - arr[l-1] + 1 - 2 * (r - l + 1))
print(*ans, sep = '\n')