n = int(input())

def generate(open, closed, tot, curr):
    if closed == 0 and open == 0:
        tot.append(curr)
    if open > 0:
        generate(open -1, closed, tot, curr + '(')
    if closed > open:
        generate(open, closed - 1, tot, curr + ')')

ans = []
generate(n, n, ans, "")
print(ans)