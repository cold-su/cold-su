class Solution {
public:
	int sumRootToLeaf(TreeNode* root) {
		dfs(root);
		return ans;
	}

private:
	int ans = 0;
	int p = 0;

	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		p = (p << 1) + r->val;
		if (!r->left and !r->right) {
			ans += p;
			p >>= 1;
			return;
		}
		dfs(r->left);
		dfs(r->right);
		p >>= 1;
	}
};