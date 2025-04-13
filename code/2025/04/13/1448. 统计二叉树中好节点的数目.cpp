/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	int goodNodes(TreeNode* root) {
		dfs(root, INT_MIN);
		return ans;
	}
	int ans = 0;
	void dfs(TreeNode* r, int pre) {
		if (not r) {
			return;
		}
		ans += pre <= r->val;
		pre = std::max(pre, r->val);
		dfs(r->left, pre);
		dfs(r->right, pre);
	}
};