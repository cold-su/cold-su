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
	bool flipEquiv(TreeNode* p, TreeNode* q) {
		dfs(p);
		dfs(q);
		return isSameTree(p, q);
	}
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (not p and not q) {
			return true;
		}
		if (not p or not q) {
			return false;
		}
		return isSameTree(p->left, q->left) and isSameTree(p->right, q->right) and p->val == q->val;
	}
	void dfs(TreeNode* r) {
		if (not r) {
			return;
		}
		if (not r->left) {
			std::swap(r->left, r->right);
		}
		if (r->left and r->right) {
			if (r->left->val < r->right->val) {
				std::swap(r->left, r->right);
			}
		}
		dfs(r->left);
		dfs(r->right);
	}
};