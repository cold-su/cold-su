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
	int sumOfLeftLeaves(TreeNode* root) {
		dfs(root, false);
		return ans;
	}
	int ans = 0;
	void dfs(TreeNode* r, bool is) {
		if (not r) {
			return;
		}
		if (not r->left and not r->right and is) {
			ans += r->val;
		}
		dfs(r->left, true);
		dfs(r->right, false);
	}
};