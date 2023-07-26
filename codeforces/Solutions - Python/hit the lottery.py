import math

i = int(input())
ans = math.floor(i/100)
i %= 100
ans += math.floor(i/20)
i %= 20
ans += math.floor(i/10)
i %= 10
ans += math.floor(i/5)
i %= 5
ans += i
print(ans)