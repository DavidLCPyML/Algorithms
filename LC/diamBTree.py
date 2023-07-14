# def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:

def diameterOfBinaryTree(root):
    def depth(root):
        if not root:
            return 0
        left = depth(root.left)
        right = depth(root.right)
        return max(left, right) + 1
    
    if not root:
        return 0
    left = depth(root.left)
    right = depth(root.right)
    return max(left + right, max(diameterOfBinaryTree(root.left), diameterOfBinaryTree(root.right)))


def diameterOfBinaryTree(root):
    self.ans = 0
    def depth(root):
        if not root:
            return 0
        left, right = depth(root.left), depth(root.right)
        self.ans = max(self.ans, left + right)
        return max(left, right) + 1

    depth(root)
    return self.ans