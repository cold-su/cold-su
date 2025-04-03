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
	int minDepth(TreeNode* r) {
		int ans = dfs(r);
		return ans != INT_MAX ? ans + 1 : 0;
	}
	int dfs(TreeNode* r) {
		if (not r) {
			return INT_MAX;
		}
		if (not r->left and not r->right) {
			return 0;
		}
		return std::min(dfs(r->left), dfs(r->right)) + 1;
	}
};