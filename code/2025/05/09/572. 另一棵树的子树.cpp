class Solution {
public:
	bool isSubtree(TreeNode* root, TreeNode* sub) {
		auto dfs = [=](this auto& dfs, TreeNode* r) -> bool {
			if (!r) {
				return false;
			}
			return isSameTree(r, sub) || dfs(r->left) || dfs(r->right);
		};
		return dfs(root);
	}
private:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (not p and not q) {
			return true;
		}
		if (not p or not q) {
			return false;
		}
		return isSameTree(p->left, q->left) and isSameTree(p->right, q->right) and p->val == q->val;
	}
};