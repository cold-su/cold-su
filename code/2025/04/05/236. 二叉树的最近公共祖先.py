# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, r: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if r is None or r is p or r is q:
            return r
        L = self.lowestCommonAncestor(r.left, p, q)
        R = self.lowestCommonAncestor(r.right, p, q)
        if L and R:
            return r
        if L:
            return L
        return R