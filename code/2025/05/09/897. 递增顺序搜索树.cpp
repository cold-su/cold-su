class Solution {
public:
	TreeNode* increasingBST(TreeNode* r) {
		dfs(r);
		int i = a.size() - 1;
		TreeNode* ans = nullptr;
		while (i >= 0) {
			ans = new TreeNode(a[i--], nullptr, ans);
		}
		return ans;
	}
private:
	std::vector<int> a;

	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		dfs(r->left);
		a.push_back(r->val);
		dfs(r->right);
	}
};