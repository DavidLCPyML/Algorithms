lucky = [
        4,7,
        44,47,74,77, 
        444,447,474,477,
        777,774,747,744,
        ]
n = int(input())
for i in lucky:
    if n % i == 0:
        print("YES")
        exit()
 
print("NO")