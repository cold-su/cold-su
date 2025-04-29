class Solution {
public:
	int longestUnivaluePath(TreeNode* r) {
		dfs(r);
		return ans;
	}
	int ans = 0;
	int dfs(TreeNode* r) {
		if (!r) {
			return 0;
		}
		int L = dfs(r->left), R = dfs(r->right);
		int _l = 0, _r = 0;
		int t = 0;
		if (r->left and r->left->val == r->val) {
			t += L;
			_l = L;
		}
		if (r->right and r->right->val == r->val) {
			t += R;
			_r = R;
		}
		ans = std::max(ans, t);
		return std::max(_l, _r) + 1;
	}
};