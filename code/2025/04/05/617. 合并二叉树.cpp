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
	TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
		return dfs(root1, root2);
	}
	TreeNode* dfs(TreeNode* p, TreeNode* q) {
		if (!p or !q) {
			if (!p) {
				std::swap(p, q);
			}
			return p;
		}
		p->val += q->val;
		p->left = dfs(p->left, q->left);
		p->right = dfs(p->right, q->right);
		return p;
	}
};