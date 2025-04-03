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
	vector<int> postorderTraversal(TreeNode* r) {
		dfs(r);
		return ans;
	}
	std::vector<int> ans;
	void dfs(TreeNode* r) {
		if (not r) {
			return;
		}
		dfs(r->left);
		dfs(r->right);
		ans.push_back(r->val);
	}
};