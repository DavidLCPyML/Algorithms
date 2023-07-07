nums = list(map(int, input().split()))
k = int(input())

fr = set(nums[:k])
for i in range(k, len(nums)):
    if nums[i] in fr:
        print(True)
        exit()
    fr.add(nums[i])
    if len(fr) > k:
        fr.remove(nums[i - k])
print(False)




s = input().strip()
t = input().strip()
print(Counter(s) == Counter(t))
# no use of counter or sorted
print({i: s.count(i) for i in s} == {i: t.count(i) for i in t})