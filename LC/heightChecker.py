heights = list(map(int, input().split()))

print(sum([1 for i in zip(heights, sorted(heights)) if i[0] != i[1]]))