# 305A
import sys
input = sys.stdin.readline

k = int(input())
nums = list(map(int, input().split()))

ans = [-1] * 5
for i in nums:
    if i == 0:
        ans[0] = i
    elif i == 100:
        ans[1] = i
    elif 1 <= i <= 9:
        ans[2] = i
    elif i % 10 == 0:
        ans[3] = i
    else:
        ans[4] = i

if ans[2] != -1 or ans[3] != -1:
    ans.pop()
ans = [i for i in ans if i != -1]

print(len(ans))
print(*ans)