maxChoosableInteger, desiredTotal = map(int, input().split())

def simulate(nums, left):
    if nums[-1] >= left:
        return True

    found = tuple(nums)
    if found in seen:
        return seen[found]

    for i in range(len(choices)):
        if not simulate(choices[:i] + choices[i+1:], left - choices[i]):
            seen[found] = True
            return True

    seen[found] = False
    return False

a,b = maxChoosableInteger, desiredTotal
best = a*(a+1)/2

if best < b:
    print("False")
elif best == b:
    print("True" if b % 2 else "False")
else:
    seen = {}
    choices = list(range(1, a+1))
    print(simulate(choices, b))