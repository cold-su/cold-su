# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode], l = -inf, r = inf) -> bool:
        if (not root):
            return True
        x = root.val
        return l < x < r and self.isValidBST(root.left, l, x) and self.isValidBST(root.right, x, r)
