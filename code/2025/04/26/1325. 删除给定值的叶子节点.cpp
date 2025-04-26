class Solution {
public:
	TreeNode* removeLeafNodes(TreeNode* r, int target) {
		if (!r) {
			return NULL;
		}
		auto L = removeLeafNodes(r->left, target), R = removeLeafNodes(r->right, target);
		if (!L and !R) {
			return r->val == target ? NULL : new TreeNode(r->val);
		}
		return new TreeNode(r->val, L, R);
	}
};