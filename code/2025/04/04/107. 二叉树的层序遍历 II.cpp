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
	vector<vector<int>> levelOrderBottom(TreeNode* r) {
		dfs(r, 0);
		std::reverse(ans.begin(), ans.end());
		return ans;
	}
	std::vector<std::vector<int>> ans;
	void dfs(TreeNode* r, int l) {
		if (not r) {
			return;
		}
		if (l >= ans.size()) {
			ans.resize(l + 1);
		}
		ans[l].push_back(r->val);
		dfs(r->left, l + 1);
		dfs(r->right, l + 1);
	}
};