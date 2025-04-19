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
	vector<vector<int>> pathTarget(TreeNode* root, int t) {
		std::vector<std::vector<int>> ans;
		std::vector<int> p;
		auto dfs = [&](this auto & dfs, TreeNode * r) -> void {
			if (not r) {
				return;
			}
			p.push_back(r->val);
			if (not r->left and not r->right) {
				if (std::reduce(p.begin(), p.end()) == t) {
					ans.push_back(p);
				}
				p.pop_back();
				return;
			}
			dfs(r->left);
			dfs(r->right);
			p.pop_back();
		};
		dfs(root);
		return ans;
	}
};