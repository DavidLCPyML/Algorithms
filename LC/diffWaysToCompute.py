expression = input()

def compute(expr):
    res = []
    size = len(expr)
    for i in range(size):
        if expr[i] in "+-*":
            res_left = compute(expr[0:i])
            res_right = compute(expr[i+1:])

            for j in res_left:
                for k in res_right:
                    res.append(eval(str(j)+expr[i]+str(k)))

    return res

print(compute(expression))