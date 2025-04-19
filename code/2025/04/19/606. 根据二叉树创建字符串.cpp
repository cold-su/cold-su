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
	string tree2str(TreeNode* r) {
		if (not r) {
			return "";
		}
		auto L = tree2str(r->left), R = tree2str(r->right);
		return std::format("{}{}{}", r->val, L == "" and R == "" ? "" : std::format("({})", L), R == "" ? "" : std::format("({})", R));
	}
};