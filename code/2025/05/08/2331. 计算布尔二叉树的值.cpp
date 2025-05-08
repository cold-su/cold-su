class Solution {
public:
	bool evaluateTree(TreeNode* r) {
		// because the tree is full, thete is no need to check r == nullptr condition
		if (!r->left and !r->right) {
			return r->val;
		}
		auto L = evaluateTree(r->left);
		auto R = evaluateTree(r->right);
		if (r->val == 2) {
			return L or R;
		}
		return L and R;
	}
};