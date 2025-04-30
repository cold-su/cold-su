class Solution {
public:
	int longestZigZag(TreeNode* root) {
		dfs(root);
		return ans;
	}
private:
	int ans = 0;
	int dfs(TreeNode* r, bool f = true) {
		if (!r) {
			return 0;
		}
		int L = dfs(r->left);
		int R = dfs(r->right, false);
		ans = std::max(ans, std::max(L, R));
		return (f ? R : L) + 1;
	}
};