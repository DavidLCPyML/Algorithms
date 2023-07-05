allowed = input().strip()
words = list(map(str, input().split()))

ans = len([word for word in words if all([char in allowed for char in word])])
print(ans)
