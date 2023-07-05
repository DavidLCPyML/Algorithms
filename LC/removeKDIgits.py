n = input().strip()
k = int(input())

stk = []
for i in n:
    while stk and stk[-1] > i and k:
        stk.pop()
        k -= 1
    stk.append(i)

ans = ''
if not k:
    ans = ''.join(stk)
else:
    ans = ''.join(stk[:-k]).lstrip('0')

print(ans if ans else '0')