class Solution {
public:
	std::vector<int> getAllElements(TreeNode* r1, TreeNode* r2) {
		dfs(r1);
		dfs(r2);
		std::ranges::sort(p);
		return p;
	}
private:
	std::vector<int> p {};
	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		p.push_back(r->val);
		dfs(r->left);
		dfs(r->right);
	}
};