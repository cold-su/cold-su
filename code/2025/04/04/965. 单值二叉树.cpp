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
	std::map<int, int> map;
	bool isUnivalTree(TreeNode* root) {
		dfs(root);
		return map.size() <= 1;
	}
	void dfs(TreeNode* r) {
		if (not r) {
			return;
		}
		map[r->val]++;
		dfs(r->left);
		dfs(r->right);
	}
};