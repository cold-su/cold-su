class BSTIterator {
public:
	BSTIterator(TreeNode* r) {
		dfs(r);
	}

	int next() {
		return v[i++];
	}

	bool hasNext() {
		return i < v.size();
	}
private:
	std::vector<int> v;
	int i = 0;

	void dfs(TreeNode* r) {
		if (!r) {
			return;
		}
		dfs(r->left);
		v.push_back(r->val);
		dfs(r->right);
	}
};