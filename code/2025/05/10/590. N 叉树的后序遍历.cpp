class Solution {
public:
	std::vector<int>
	postorder(Node* r) {
		dfs(r);
		return ans;
	}
private:
	std::vector<int> ans;

	void
	dfs(Node* r) {
		if (!r) {
			return;
		}
		for (auto c : r->children) {
			dfs(c);
		}
		ans.emplace_back(r->val);
	}
};