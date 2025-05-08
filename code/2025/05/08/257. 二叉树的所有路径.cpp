class Solution {
public:
	vector<string> binaryTreePaths(TreeNode* root) {
		dfs(root);
		return ans;
	}

private:
	std::vector<std::string> ans;
	std::vector<std::string> s;

	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		s.emplace_back(std::to_string(r->val));
		if (!r->left and !r->right) {
			std::string res {};
			for (int i = 0, n = s.size(); i < n; i++) {
				res += s[i];
				if (i + 1 < n) {
					res += "->";
				}
			}
			ans.emplace_back(res);
			s.pop_back();
			return;
		}
		dfs(r->left);
		dfs(r->right);
		s.pop_back();
	}
};