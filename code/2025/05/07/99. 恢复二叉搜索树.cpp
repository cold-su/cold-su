class Solution {
public:
	void recoverTree(TreeNode* root) {
		dfs(root);
		std::ranges::sort(a);
		fill(root);
	}

private:
	std::vector<int> a;
	int i = 0;

	void fill(TreeNode* r) {
		if (!r) {
			return;
		}
		fill(r->left);
		r->val = a[i++];
		fill(r->right);
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