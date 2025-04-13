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
	int sumNumbers(TreeNode* root) {
		dfs(root, 0);
		return std::reduce(a.begin(), a.end());
	}
	std::vector<int> a;
	void dfs(TreeNode* r, int val) {
		if (not r) {
			return;
		}
		val = val * 10 + r->val;
		if (not r->left and not r->right) {
			a.push_back(val);
			return;
		}
		dfs(r->left, val);
		dfs(r->right, val);
	}
};