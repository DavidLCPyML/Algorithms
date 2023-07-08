class Solution:
    def maximum69Number (self, num: int) -> int:
        return int(str(num).replace("6", "9", 1))

# more general solution
num = str(num)
for i in range(len(num)):
    if num[i] == '6':
        return int(num[:i]+'9'+num[i+1:])
return int(num)