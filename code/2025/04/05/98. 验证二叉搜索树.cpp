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
	bool isValidBST(TreeNode* r, long L = LONG_MIN, long R = LONG_MAX) {
		if (not r) {
			return true;
		}
		int x = r->val;
		return L < x and x < R and isValidBST(r->left, L, x) and isValidBST(r->right, x, R);
	}
};