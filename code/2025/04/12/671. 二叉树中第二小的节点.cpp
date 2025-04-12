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
	int findSecondMinimumValue(TreeNode* root) {
		dfs(root);
		if (a.size() < 2) {
			return -1;
		}
		return *std::next(a.begin());
	}
	std::set<int> a;
	void dfs(TreeNode* r) {
		if (not r) {
			return;
		}
		if (not r->left and not r->right) {
			a.insert(r->val);
		}
		dfs(r->left);
		dfs(r->right);
	}
};