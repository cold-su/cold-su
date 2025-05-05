class Solution {
public:
	TreeNode* deleteNode(TreeNode* root, int key) {
		return balanceBST(root, key);
	}
private:
	std::vector<int> a;

	TreeNode* balanceBST(TreeNode* root, int k) {
		dfs(root, k);
		std::ranges::sort(a);
		return build(0, a.size());
	}

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

	void dfs(TreeNode* r, int k) {
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