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
	void flatten(TreeNode* root) {
		dfs(root);
		for (int i = 0, n = p.size(); i + 1 < n; i++) {
			p[i]->left = NULL;
			p[i]->right = p[i + 1];
		}
	}
	std::vector<TreeNode*> p;
	void dfs(TreeNode* r) {
		if (not r) {
			return;
		}
		p.push_back(r);
		dfs(r->left);
		dfs(r->right);
	}
};