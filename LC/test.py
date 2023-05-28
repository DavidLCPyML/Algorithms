expression = input()

def diffways(self, input):
    m = {}
    return self.dfs(input,m)

def dfs(self, input, m):
    if input in m:
        return m[input]
    elif input not in "+-*":
        m[input] = int(input)
        return [int(input)]

    res = []
    sz = len(input)
    for i in range(sz):
        if input[sz] in "+-*":
            right = self.diffways(input[i+1:])
            left = self.diffways(input[0:i])

            for i in right:
                for j in left:
                    res.append(eval(str(x)+input[i]+str(y)))
    m[input] = res
    return res


print(diffways(expression))