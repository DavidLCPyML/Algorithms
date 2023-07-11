mainTank, additonalTank = map(int, input().split())

dist = 0
while mainTank >= 5:
    mainTank -= 5
    dist += 50
    if additionalTank:
        additionalTank -= 1
        mainTank += 1
print(dist + mainTank * 10)

# 1 liner
print((a + min((a-1) // 4, b)) * 10)