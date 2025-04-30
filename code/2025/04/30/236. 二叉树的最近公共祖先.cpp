class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		return lca_of(root, p->val, q->val);
	}
private:
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