size = int(input())
triangle = []
for i in range(size):
    row = list(map(int, input().split()))
    triangle.append(row)
print(triangle)


if size == 1:
    print(triangle[0][0])
dp = []
prev = triangle[0]
    
for i in range(1, len(triangle)):
    dp.append(prev[0] + triangle[i][0])
    for j in range(1, len(triangle[i])-1):
        dp.append(min(prev[j-1], prev[j]) + triangle[i][j])
    dp.append(prev[-1] + triangle[i][-1])

    prev = dp
    dp = []

print(min(prev))