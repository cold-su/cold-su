class Solution {
public:
	TreeNode* addOneRow(TreeNode* r, int val, int depth, int d = 1, bool f = true) {
		if (depth == d) {
			return f ? new TreeNode(val, r, NULL) : new TreeNode(val, NULL, r);
		}
		if (!r) {
			return NULL;
		}
		return new TreeNode(r->val, 
			addOneRow(r->left, val, depth, d + 1), 
			addOneRow(r->right, val, depth, d + 1, false));
	}
};