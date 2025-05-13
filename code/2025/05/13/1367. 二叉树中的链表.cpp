class Solution
{
public:
	bool
	isSubPath(ListNode* h, TreeNode* r)
	{
		if (!r) {
			return false;
		}
		return match(h, r) || isSubPath(h, r->left) || isSubPath(h, r->right);
	}
private:
	bool
	match(ListNode* h, TreeNode* r)
	{
		if (!h) {
			return true;
		}
		if (!r) {
			return false;
		}
		if (h->val != r->val) {
			return false;
		}
		return match(h->next, r->left) || match(h->next, r->right);
	}
};