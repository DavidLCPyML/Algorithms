import sys
input = sys.stdin.readline
t = int(input())
ans = []

for _ in range(t):
    n = int(input())
    seq = list(map(int, input().split()))

    s = sum(seq)
    if 2*s % n != 0:
        ans.append(0)
    else:
        tofind = s * (n - 2) // n
        res = 0
        
        d = dict()
        for i in seq:
            if i in d:
                d[i] += 1
            else:
                d[i] = 1

        # twosum to find tofind
        for i in seq:
            left = s - tofind - i
            if i == left:
                res += (d[left] - 1)
            elif left in d:
                res += d[left]


        ans.append(res // 2)
    
print(*ans, sep='\n')