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
	TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
		auto max = [&](int l, int r) {
			int res = INT_MIN;
			int j;
			for (int i = l; i < r; i++) {
				if (nums[i] > res) {
					res = nums[i];
					j = i;
				}
			}
			return std::pair<int, int> {res, j};
		};
		auto dfs = [&](this auto & dfs, int l, int r) -> TreeNode* {
			if (l >= r) {
				return NULL;
			}
			auto [_max, d] = max(l, r);
			return new TreeNode(_max, dfs(l, d), dfs(d + 1, r));
		};
		return dfs(0, nums.size());
	}
};