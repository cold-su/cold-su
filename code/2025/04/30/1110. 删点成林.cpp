class Solution {
public:
	vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
		this->s = std::set(to_delete.begin(), to_delete.end());
		ans.push_back(dfs(root));
		pop(ans, NULL);
		return ans;
	}
private:
	std::set<int> s;
	std::vector<TreeNode*> ans;
	
	TreeNode* dfs(TreeNode* r) {
		if (!r) {
			return NULL;
		}
		if (s.count(r->val)) {
			if (r->left || r->right) {
				ans.push_back(dfs(r->left));
				pop(ans, NULL);
				ans.push_back(dfs(r->right));
				pop(ans, NULL);
			}
			return NULL;
		}
		return new TreeNode(r->val, dfs(r->left), dfs(r->right));
	}

	void pop(std::vector<TreeNode*>& v, TreeNode* r) {
		if (v.size() and v.back() == r) {
			v.pop_back();
		}
	}
};