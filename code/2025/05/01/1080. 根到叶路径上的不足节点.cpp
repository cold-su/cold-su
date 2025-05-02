class Solution {
public:
	TreeNode* sufficientSubset(TreeNode* root, int limit) {
		auto dfs = [=](this auto& dfs, TreeNode* r, int p) -> TreeNode* {
			if (!r) {
				return NULL;
			}
			int s = sum(r);
			if (p + s < limit) {
				return NULL;
			}
			return new TreeNode(r->val, dfs(r->left, p + r->val), dfs(r->right, p + r->val));
		};
		return dfs(root, 0);
	}
private:
	int sum(TreeNode* r) {
		if (!r) {
			return 0;
		}
		int res = r->val;
		auto L = sum(r->left), R = sum(r->right);
		res += r->left and r->right ? std::max(L, R) : r->left ? L : r->right ? R : 0;
		return res;
	}
};