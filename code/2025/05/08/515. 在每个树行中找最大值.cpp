class Solution {
public:
	vector<int> largestValues(TreeNode* root) {
		dfs(root, 0);
		std::vector<int> ans;
		for (auto& [k, v] : map) {
			ans.push_back(*std::prev(v.end()));
		}
		return ans;
	}

private:
	std::map<int, std::set<int>> map;

	void dfs(TreeNode* r, int d) {
		if (!r) {
			return;
		}
		map[d].insert(r->val);
		dfs(r->left, d + 1);
		dfs(r->right, d + 1);
	}
};