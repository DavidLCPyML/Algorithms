# def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:

print([mat.index(max(mat, key=lambda x: x.count(1)))][0], max(mat, key=lambda x: x.count(1)).count(1))

# 1 liner version
# return [mat.index(row) for row in mat if row.count(1) == max([row.count(1) for row in mat])][0]