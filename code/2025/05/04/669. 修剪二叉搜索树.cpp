class Solution {
public:
	TreeNode* trimBST(TreeNode* root, int low, int high) {
		auto dfs = [=](this auto& dfs, TreeNode* r, int lo, int hi) -> TreeNode* {
			if (!r) {
				return nullptr;
			}
			auto L = dfs(r->left, lo, r->val);
			auto R = dfs(r->right, r->val, hi);
			if (lo > hi || !(low <= r->val and r->val <= high)) {
				return L ? L : R;
			}
			return new TreeNode(r->val, L, R);
		};
		return dfs(root, low, high);
	}
};