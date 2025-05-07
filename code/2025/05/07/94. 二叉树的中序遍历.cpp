class Solution {
public:
	vector<int> inorderTraversal(TreeNode* r) {
		std::vector<int> ans;
		while (r) {
			if (r->left) {
				auto p = r->left;
				while (p->right and p->right != r) {
					p = p->right;
				}
				if (!p->right) {
					p->right = r;
					r = r->left;
				} else {
					r = p->right;
					r->left = nullptr;
				}
			} else {
				ans.push_back(r->val);
				r = r->right;
			}
		}
		return ans;
	}
};