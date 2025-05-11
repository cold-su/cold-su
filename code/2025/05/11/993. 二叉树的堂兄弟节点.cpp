class Solution {
public:
	bool
	isCousins(TreeNode* r, int x, int y)
	{
		auto [p1, _x] = find(nullptr, r, x);
		auto [p2, _y] = find(nullptr, r, y);
		return p1 != p2 and _x == _y;
	}
private:
	std::pair<TreeNode*, int>
	find(TreeNode* fa, TreeNode* r, int t, int d = 0)
	{
		if (!r) {
			return { nullptr, d };
		}
		if (r->val == t) {
			return { fa, d };
		}
		auto L = find(r, r->left, t, d + 1);
		auto R = find(r, r->right, t, d + 1);
		return L.first ? L : R;
	}
};