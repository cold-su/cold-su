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
	bool isBalanced(TreeNode* r) {
		return dfs(r) != -1;
	}
	int dfs(TreeNode* r) {
		if (not r) {
			return 0;
		}
		int L = dfs(r->left), R = dfs(r->right);
		if (L == -1 or R == -1) {
			return -1;
		}
		if (L < R) {
			std::swap(L, R);
		}
		if (L - R > 1) {
			return -1;
		} else {
			return L + 1;
		}
	}
};