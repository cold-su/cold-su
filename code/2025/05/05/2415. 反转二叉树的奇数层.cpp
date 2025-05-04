class Solution {
public:
	TreeNode* reverseOddLevels(TreeNode* root) {
		build(root, 0);
		for (int i = 0, n = a.size(); i < n; i++) {
			if (i & 1) {
				std::reverse(a[i].begin(), a[i].end());
			}
		}
		fill(root, 0);
		return root;
	}
private:
	std::vector<std::vector<int>> a;
	std::vector<int> b;
	
	void fill(TreeNode* r, int d) {
		if (!r) {
			return;
		}
		if (b.size() <= d) {
			b.resize(d + 1);
		}
		r->val = a[d][b[d]];
		b[d]++;
		fill(r->left, d + 1);
		fill(r->right, d + 1);
	}

	void build(TreeNode* r, int d) {
		if (!r) {
			return;
		}
		if (a.size() <= d) {
			a.resize(d + 1);
		}
		a[d].push_back(r->val);
		build(r->left, d + 1);
		build(r->right, d + 1);
	}
};