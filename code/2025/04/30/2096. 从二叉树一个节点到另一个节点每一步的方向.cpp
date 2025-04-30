class Solution {
public:
	string getDirections(TreeNode* root, int startValue, int destValue) {
		auto lca = lca_of(root, startValue, destValue);
		int n = _dfs(lca, startValue);
		dfs(lca, destValue, ' ');
		std::string t(n - 1, 'U');
		return t + ans;
	}
private:
	std::string ans {};
	std::string p {};

	int _dfs(TreeNode* r, int k) {
		if (!r) {
			return 0;
		}
		if (r->val == k) {
			return 1;
		}
		int L = _dfs(r->left, k), R = _dfs(r->right, k);
		if (L || R) {
			return std::max(L, R) + 1;
		}
		return 0;
	}

	void dfs(TreeNode* r, int k, char c) {
		if (!r || ans.size() != 0) {
			return;
		}
		p += c;
		if (r->val == k) {
			ans = p.substr(1);
			return;
		}
		dfs(r->left, k, 'L');
		dfs(r->right, k, 'R');
		p.pop_back();
	}
	
	TreeNode* lca_of(TreeNode* r, int p, int q) {
		if (!r) {
			return NULL;
		}
		if (r->val == p || r->val == q) {
			return r;
		}
		auto L = lca_of(r->left, p, q);
		auto R = lca_of(r->right, p, q);
		if (L || R) {
			return L and R ? r : L ? L : R;
		}
		return NULL;
	}
};