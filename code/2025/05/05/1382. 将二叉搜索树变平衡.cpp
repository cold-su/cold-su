class Solution {
public:
	TreeNode* balanceBST(TreeNode* root) {
		dfs(root);
		std::ranges::sort(a);
		return build(0, a.size());
	}
private:
	std::vector<int> a;

	TreeNode* build(int l, int r) {
		if (l > r) {
			return nullptr;
		}
		int m = (l + r) / 2;
		if (!(l <= m and m < r)) {
			return nullptr;
		}
		return new TreeNode(a[m], build(l, m), build(m + 1, r));
	}

	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		dfs(r->left);
		a.push_back(r->val);
		dfs(r->right);
	}
};