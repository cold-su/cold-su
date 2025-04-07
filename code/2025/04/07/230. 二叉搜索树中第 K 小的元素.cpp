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
	int kthSmallest(TreeNode* root, int k) {
		dfs(root, k);
		return ans;
	}

	int ans = 0;
	int i = 0;
	void dfs(TreeNode* r, int k) {
		if (not r) {
			return;
		}
		dfs(r->left, k);
		if (++i == k) {
			ans = r->val;
		}
		dfs(r->right, k);
	}
};