class FindElements {
public:
	FindElements(TreeNode* r) {
		r->val = 0;
		recover(r);
		dfs(r);
		std::ranges::sort(p);
	}
	bool find(int val) {
		return std::binary_search(p.begin(), p.end(), val);
	}
private:
	std::vector<int> p;
	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		p.push_back(r->val);
		dfs(r->left);
		dfs(r->right);
	}
	void recover(TreeNode* r) {
		if (!r) {
			return;
		}
		int x = r->val;
		if (r->left) {
			r->left->val = 2 * x + 1;
		}
		if (r->right) {
			r->right->val = 2 * x + 2;
		}
		recover(r->left);
		recover(r->right);
	}
};