class Solution {
public:
	int
	rangeSumBST(TreeNode* r, int lo, int hi)
	{
		int ans = 0;
		auto dfs = [&](this auto& dfs, TreeNode* r) -> void {
			if (!r) {
				return;
			}
			int val = r->val;
			if (lo <= val and val <= hi) {
				ans += r->val;
			}
			dfs(r->left);
			dfs(r->right);
		};
		dfs(r);
		return ans;
	}
};