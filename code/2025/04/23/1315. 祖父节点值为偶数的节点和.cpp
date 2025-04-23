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
	int sumEvenGrandparent(TreeNode* root) {
		dfs(root);
		return ans;
	}
	std::deque<int> p;
	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		p.push_front(r->val);
		if (p.size() >= 3 and p[2] % 2 == 0) {
			ans += r->val;
		}
		dfs(r->left);
		dfs(r->right);
		p.pop_front();
	}
};