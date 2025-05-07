class Solution {
public:
	vector<int> inorderTraversal(TreeNode* r) {
		std::vector<int> ans;
		// Morris 遍历
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
					p->right = nullptr;
					ans.push_back(r->val);
					r = r->right;
				}
			} else {
				ans.push_back(r->val);
				r = r->right;
			}
		}
		return ans;
	}
};