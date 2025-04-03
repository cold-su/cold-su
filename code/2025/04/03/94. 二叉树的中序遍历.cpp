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
	std::vector<int> ans;
	vector<int> inorderTraversal(TreeNode* r) {
		dfs(r);
		return ans;
	}
	void dfs(TreeNode* r) {
		if (not r) {
			return;
		}
		dfs(r->left);
		ans.push_back(r->val);
		dfs(r->right);
	}
};