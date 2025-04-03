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
	int maxPathSum(TreeNode* r) {
		dfs(r);
		return ans;
	}
	int ans = INT_MIN;
	std::pair<int, int> dfs(TreeNode* r) {
		if (not r) {
			return {0, 0};
		}
		int L = max(dfs(r->left));
		int R = max(dfs(r->right));
		ans = std::max({
			ans,
			r->val,
			L + R + r->val,
			L + r->val,
			R + r->val
		});
		return {std::max(r->val, L + r->val), std::max(r->val, R + r->val)};
	}
	int max(std::pair<int, int> x) {
		return std::max(x.first, x.second);
	}
};