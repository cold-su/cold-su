class Solution
{
public:
	bool
	isSubPath(ListNode* head, TreeNode* root)
	{
		if (!root) {
			return false;
		}
		bool ok = false;
		auto dfs = [&](auto& self, TreeNode* r, ListNode* h) -> bool {
			if (ok) {
				return ok;
			}
			if (!h) {
				return ok = true;
			}
			if (!r) {
				return false;
			}
			bool match = r->val == h->val;
			if (!match) {
				return false;
			}
			return self(self, r->left, h->next) || self(self, r->right, h->next);
		};
		return dfs(dfs, root, head) || isSubPath(head, root->left) || isSubPath(head, root->right);
	}
};