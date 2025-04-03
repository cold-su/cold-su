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
		int L = std::max(max(dfs(r->left)), 0);
		int R = std::max(max(dfs(r->right)), 0);
		ans = std::max(ans, L + R + r->val);
		return {L + r->val, R + r->val};
	}
	int max(std::pair<int, int> x) {
		return std::max(x.first, x.second);
	}
};