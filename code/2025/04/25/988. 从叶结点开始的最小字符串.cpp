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
	std::set<std::string> s;
	std::string p {};
	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		p.push_back(r->val + 'a');
		if (!r->left and !r->right) {
			s.insert(std::string(p.rbegin(), p.rend()));
			p.pop_back();
			return;
		}
		dfs(r->left);
		dfs(r->right);
		p.pop_back();
	}
	string smallestFromLeaf(TreeNode* r) {
		if (!r) {
			return "";
		}
		dfs(r);
		return *s.begin();
	}
};