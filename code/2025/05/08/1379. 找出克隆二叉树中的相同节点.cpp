class Solution {
public:
	TreeNode* getTargetCopy(TreeNode* a, TreeNode* b, TreeNode* t) {
		if (!b) {
			return nullptr;
		}
		if (b->val == t->val and a == t) {
			return b;
		}
		auto L = getTargetCopy(a->left, b->left, t);
		auto R = getTargetCopy(a->right, b->right, t);
		return L ? L : R;
	}
};