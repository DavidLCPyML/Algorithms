n = int(input())

def genTrees(l, r):
    if l > r:
        return [None]
    elif l == r:
        return [l]
    else:
        ans = []
        for root in range(l, r+1):
            left = genTrees(l, root-1)
            right = genTrees(root+1, r)
            for x in left:
                for y in right:
                    ans.append((root, x, y))
        return ans
print(genTrees(1, n))
