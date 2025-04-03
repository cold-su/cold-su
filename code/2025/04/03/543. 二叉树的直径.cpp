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
	int diameterOfBinaryTree(TreeNode* r) {
		dfs(r);
		return ans;
	}
	std::pair<int, int> dfs(TreeNode* r) {
		if (not r) {
			return {0, 0};
		}
		int L = max(dfs(r->left));
		int R = max(dfs(r->right));
		ans = std::max(L + R, ans);
		return {L + 1, R + 1};
	}
	int max(std::pair<int, int> x) {
		return std::max(x.first, x.second);
	}
};