s = input().strip()
dictionary = input().strip().split()

for word in sorted(dictionary, key=lambda x: (-len(x), x)):
    if all(c in s for c in word):
        print(word)
        break