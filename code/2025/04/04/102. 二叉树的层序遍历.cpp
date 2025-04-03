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
	std::vector<std::vector<int>> ans;
	vector<vector<int>> levelOrder(TreeNode* r) {
		if (not r) {
			return {};
		}
		std::deque<TreeNode*> s {r};
		std::vector<int> p;
		dfs(r, 0);
		int i = 0;
		while (not s.empty()) {
			auto cur = s.front();
			s.pop_front();
			if (not cur) {
				continue;
			}
			p.push_back(cur->val);
			if (i < l.size() and cur == l[i]) {
				ans.push_back(p);
				i++;
				p = {};
			}
			s.push_back(cur->left);
			s.push_back(cur->right);
		}
		if (p.size() != 0) {
			ans.push_back(p);
		}
		return ans;
	}
	std::vector<TreeNode*> l;
	void dfs(TreeNode* r, int i) {
		if (not r) {
			return;
		}
		if (i >= l.size()) {
			l.resize(i + 1);
		}
		l[i] = r;
		dfs(r->left, i + 1);
		dfs(r->right, i + 1);
	}
};