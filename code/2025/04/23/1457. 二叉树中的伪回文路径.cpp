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
	int ans = 0;
	int pseudoPalindromicPaths (TreeNode* root) {
		dfs(root, 0);
		return ans;
	}

	int p = 0;
	void dfs(TreeNode* r, int p) {
		if (!r) {
			return;
		}
		p ^= 1 << r->val;
		if (!r->left and !r->right) {
			ans += (p & (p - 1)/*删除最小元素*/) == 0;
			return;
		}
		dfs(r->left, p);
		dfs(r->right, p);
	}
};