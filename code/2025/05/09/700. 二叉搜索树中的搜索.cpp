class Solution {
public:
	TreeNode* searchBST(TreeNode* r, int val) {
		if (!r) {
			return nullptr;
		}
		if (r->val == val) {
			return r;
		}
		auto L = searchBST(r->left, val), R = searchBST(r->right, val);
		return L ? L : R;
	}
};