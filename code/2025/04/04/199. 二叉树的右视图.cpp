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
	vector<int> rightSideView(TreeNode* r) {
		dfs(r, 0);
		return a;
	}
	std::vector<int> a;
	void dfs(TreeNode* r, int i) {
		if (not r) {
			return;
		}
		dfs(r->left, i + 1);
		dfs(r->right, i + 1);
		if (i >= a.size()) {
			a.resize(i + 1);
		}
		a[i] = r->val;
	}
};