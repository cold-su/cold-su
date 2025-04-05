/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* r, TreeNode* p, TreeNode* q) {
		if (not r or isSameTree(r, p) or isSameTree(r, q)) {
			return r;
		}
		auto L = lowestCommonAncestor(r->left, p, q), R = lowestCommonAncestor(r->right, p, q);
		if (L and R) {
			return r;
		}
		if (L) {
			return L;
		}
		return R;
	}
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (not p and not q) {
			return true;
		}
		if (not p or not q) {
			return false;
		}
		return isSameTree(p->left, q->left) and isSameTree(p->right, q->right) and p->val == q->val;
	}
};