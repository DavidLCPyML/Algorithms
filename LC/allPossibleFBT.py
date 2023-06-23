n = int(input())

if n % 2 == 0:
    return []
if n == 1: 
    return [TreeNode(0)]

dp = defaultdict(list)
dp[1].append(TreeNode(0))

temp = TreeNode(0)
temp.left = TreeNode(0)
temp.right= TreeNode(0)
dp[3].append(temp)

for i in range(5, n+1, 2):
    left = 1
    right= (i-1)-1
    while right>=1:
        for l_tree in dp[left]:
            for r_tree in dp[right]: 
                root = TreeNode(0)
                root.left = l_tree
                root.right = r_tree
                dp[i].append(root)
        right -= 2
        left += 2
print(*dp[n])