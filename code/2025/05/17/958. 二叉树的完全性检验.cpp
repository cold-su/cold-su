class Solution
{
public:
	bool
	isCompleteTree(TreeNode* r) // 连续节点数 == 总结点数
	{
		int c = cnt(r);
		int n = 0;
		std::deque<TreeNode*> s {r};
		while (s.size()) {
			auto p = s.front();
			s.pop_front();
			if (!p) {
				break;
			}
			n++;
			s.emplace_back(p->left);
			s.emplace_back(p->right);
		}
		return c == n;
	}
private:
	int
	cnt(TreeNode* r)
	{
		if (!r) {
			return 0;
		}
		return 1 + cnt(r->left) + cnt(r->right);
	}
};