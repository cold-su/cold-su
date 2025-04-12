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
	TreeNode* sortedArrayToBST(vector<int>& a) {
		auto dfs = [&](this auto & dfs, int l, int r) -> TreeNode* {
			if (l >= r) {
				return NULL;
			}
			int m = l + (r - l) / 2;
			return new TreeNode(a[m], dfs(l, m), dfs(m + 1, r));
		};
		int n = a.size();
		return dfs(0, n);
	}
};