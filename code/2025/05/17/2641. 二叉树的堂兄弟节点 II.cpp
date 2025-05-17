class Solution {
public:
	TreeNode* replaceValueInTree(TreeNode* root) {
		if (root) {
			root->val = 0;
		}
		sum(root);
		auto make = [&](this auto& self, TreeNode* fa,  TreeNode* r, int i) -> TreeNode* {
			if (!r) {
				return nullptr;
			}
			int p = 0;
			if (fa) {
				if (fa->left) {
					p += fa->left->val;
				}
				if (fa->right) {
					p += fa->right->val;
				}
			}
			return new TreeNode(a[i] - p, self(r, r->left, i + 1), self(r, r->right, i + 1));
		};
		return make(nullptr, root, 0);
	}
private:
	std::vector<int> a;

	void sum(TreeNode* r, int i = 0) {
		if (!r) {
			return;
		}
		if (i >= a.size()) {
			a.resize(i + 1);
		}
		a[i] += r->val;
		sum(r->left, i + 1);
		sum(r->right, i + 1);
	}
};