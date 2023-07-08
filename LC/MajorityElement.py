nums = list(map(int, input().split()))

print(max(set(nums), key = nums.count))

# linear time solution
print(Collections.Counter(nums).most_common(1)[0][0])
