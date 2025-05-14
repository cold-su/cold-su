class Solution
{
public:
	ListNode*
	reverseList(ListNode* h)
	{
		auto ans = new ListNode();
		auto done = [this, u = ans](this auto& done, ListNode* h) -> void {
			if (!h) {
				return;
			}
			done(h->next);
			u->next = new ListNode(h->val);
			u = u->next;
		};
		done(h);
		return ans->next;
	}
};