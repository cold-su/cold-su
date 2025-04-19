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
	int pathSum(TreeNode* root, int targetSum) {
		int ans = 0;
		auto dfs = [&](this auto & dfs, TreeNode * r) {
			if (not r) {
				return;
			}
			ans += count(r, targetSum);
			dfs(r->left);
			dfs(r->right);
		};
		dfs(root);
		return ans;
	}
	using u64 = unsigned long long;
	int count(TreeNode* root, int t) {
		int ans = 0;
		std::vector<u64> p;
		auto dfs = [&](this auto & dfs, TreeNode * r) -> void {
			if (not r) {
				return;
			}
			p.push_back(r->val);
			if (std::reduce(p.begin(), p.end()) == t) {
				ans++;
			}
			dfs(r->left);
			dfs(r->right);
			p.pop_back();
		};
		dfs(root);
		return ans;
	}
};