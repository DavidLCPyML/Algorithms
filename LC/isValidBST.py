# def isValidBST(self, root: Optional[TreeNode]) -> bool:
def isValidBST(root, l=float('-inf'), h=float('inf')):
    if not root:
        return True
    if root.val < l or root.val > h:
        return False
    return self.isValidBST(root.left, l, root.val-1) and self.isValidBST(root.right, root.val+1, h)