import sys
input = sys.stdin.readline

n = int(input())
degrees = []
for _ in range(n):
    degrees.append(int(input()))
def search(index, tot, degrees):
    if index == len(degrees):
        return tot % 360 == 0
    else:
        return search(index+1, tot + degrees[index], degrees) or search(index+1, tot - degrees[index], degrees)
if search(0,0,degrees):
    print("YES") 
else:
    print("NO")


# n = int(input())
# sums = {0}
# for _ in range(n):
#     a = int(input())
#     sums = set((a + x) % 360 for x in sums) | set((a - x) % 360 for x in sums)
# print("YES" if 0 in sums else "NO")