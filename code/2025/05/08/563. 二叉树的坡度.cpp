class Solution {
public:
	int findTilt(TreeNode* root) {
		dfs(root);
		return ans;
	}

private:
	int ans = 0;

	int dfs(TreeNode* r) {
		if (!r) {
			return 0;
		}
		auto L = dfs(r->left), R = dfs(r->right);
		ans += abs(L - R);
		return r->val + L + R;
	}
};