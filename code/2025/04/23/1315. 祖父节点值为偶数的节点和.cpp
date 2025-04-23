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
	int sumEvenGrandparent(TreeNode* root, int father = -1, int grand = -1) {
		int res = 0;
		if (!root) {
			return res;
		}
		if (grand % 2 == 0) {
			res += root->val;
		}
		return res
			+ sumEvenGrandparent(root->left, root->val, father)
			+ sumEvenGrandparent(root->right, root->val, father);
	}
};