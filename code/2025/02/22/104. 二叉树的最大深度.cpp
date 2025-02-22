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
	int maxDepth(TreeNode* root) {
		int ans = 0;
		auto dfs = [&](this auto && dfs, TreeNode * root, int cnt) {
			ans = std::max(ans, cnt);
			if (!root) {
				return;
			}
			dfs(root->left, cnt + 1);
			dfs(root->right, cnt + 1);
		};
		dfs(root, 0);
		return ans;
	}
};