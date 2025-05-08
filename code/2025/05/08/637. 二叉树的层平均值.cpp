class Solution {
public:
	vector<double> averageOfLevels(TreeNode* root) {
		dfs(root);
		std::vector<double> ans;
		for (auto& [_, v] : map) {
			ans.push_back(std::reduce(v.begin(), v.end()) / (double) v.size());
		}
		return ans;
	}
private:
	std::map<int, std::vector<int64_t>> map;

	void dfs(TreeNode* r, int d = 0) {
		if (!r) {
			return;
		}
		map[d].push_back(r->val);
		dfs(r->left, d + 1);
		dfs(r->right, d + 1);
	}
};