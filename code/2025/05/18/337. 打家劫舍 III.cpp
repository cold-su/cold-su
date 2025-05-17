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
  int rob(TreeNode* root) {
  	auto dp = [](this auto& self, TreeNode* r) -> std::array<int, 2> {
  		if (!r) {
  			return {0, 0};
  		}
  		// a == pick, b == not pick
  		auto [la, lb] = self(r->left);
  		auto [ra, rb] = self(r->right);
  		int a = lb + rb + r->val;
  		int b = std::max(la, lb) + std::max(ra, rb);
  		return {a, b};
  	};
  	return std::ranges::max(dp(root));
  }
};