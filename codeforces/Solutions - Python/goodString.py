import sys
input = sys.stdin.readline

for _ in range(int(input())):
    num = input().strip()

    ans = 0
    for i in range(10):
        for j in range(10):
            cnt, a, b = 0, i, j
            for c in num:
                # if a found we need to switch to finding b
                if int(c) == a:
                    cnt += 1
                    a, b = b, a
            if cnt % 2 and a != b:
                cnt -= 1
            
            ans = max(ans, cnt)
    print(len(num) - ans)