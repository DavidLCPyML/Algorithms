nums = list(map(int, input().split()))

print(max(nums) * k + k*(k-1)//2)