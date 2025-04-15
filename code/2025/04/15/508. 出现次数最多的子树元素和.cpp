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
	vector<int> findFrequentTreeSum(TreeNode* root) {
		std::vector<int> ans;
		dfs(root);
		for (auto [k, v] : map) {
			if (v == max) {
				ans.push_back(k);
			}
		}
		// std::cout << max;
		return ans;
	}
	int max = 0;
	std::map<int, int> map;
	int dfs(TreeNode* r) {
		if (not r) {
			return 0;
		}
		int L = dfs(r->left), R = dfs(r->right);
		int p = L + R + r->val;
		map[p]++;
		max = std::max(max, map[p]);
		return p;
	}
};