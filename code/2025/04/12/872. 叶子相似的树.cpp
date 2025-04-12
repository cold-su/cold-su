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
	bool leafSimilar(TreeNode* root1, TreeNode* root2) {
		dfs(root1, a), dfs(root2, b);
		return a == b;
	}
	std::vector<int> a, b;
	void dfs(TreeNode* r, std::vector<int>& p) {
		if (not r) {
			return;
		}
		if (not r->left and not r->right) {
			p.push_back(r->val);
		}
		dfs(r->left, p), dfs(r->right, p);
	}
};