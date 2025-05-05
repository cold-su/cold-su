class Solution {
public:
	TreeNode* insertIntoBST(TreeNode* root, int val) {
		dfs(root);
		a.push_back(val);
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

	void dfs(TreeNode* r, int k = INT_MAX) {
		if (!r) {
			return;
		}
		dfs(r->left, k);
		if (r->val != k) {
			a.push_back(r->val);
		}
		dfs(r->right, k);
	}
};