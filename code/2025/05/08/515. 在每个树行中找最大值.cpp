class Solution {
public:
	vector<int> largestValues(TreeNode* root) {
		dfs(root, 0);
		std::vector<int> ans;
		for (auto& [k, v] : map) {
			ans.push_back(-(*v.begin()));
		}
		return ans;
	}

private:
	std::map<int, std::set<int64_t>> map;

	void dfs(TreeNode* r, int d) {
		if (!r) {
			return;
		}
		map[d].insert(-(int64_t) r->val);
		dfs(r->left, d + 1);
		dfs(r->right, d + 1);
	}
};