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
		if (!r || r == p || r == q) {
			return r;
		}
		auto L = lowestCommonAncestor(r->left, p, q), R = lowestCommonAncestor(r->right, p, q);
		if (L and R) {
			return r;
		}
		return L ? L : R;
	}
};