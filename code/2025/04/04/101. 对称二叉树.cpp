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
	bool isSymmetric(TreeNode* r) {
		return dfs(r, r);
	}
	bool dfs(TreeNode* p, TreeNode* q) {
		if (not p or not q) {
			return p == q;
		}
		return p->val == q->val and dfs(p->left, q->right) and dfs(p->right, q->left);
	}
};