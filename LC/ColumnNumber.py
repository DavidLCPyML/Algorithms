col = int(input())

ans = []
while columnNumber:
    columnNumber -= 1
    char = columnNumber % 26
    ans.append(chr(char + 65))
    columnNumber //= 26
print(''.join(ans[::-1]))

# 1 liner
def convertToTitle(self, columnNumber: int) -> str:
    return "" if columnNumber == 0 else self.convertToTitle((columnNumber - 1) // 26) + chr((columnNumber - 1) % 26 + ord('A'))