class Solution {
public:
	TreeNode* bstFromPreorder(vector<int>& preorder) {
		int n = preorder.size();
		int i = 0;
		auto dfs = [=](this auto& dfs, int l, int r) -> TreeNode* {
			if (!(0 <= i and i < n)) {
				return nullptr;
			}
			int val = preorder[i];
			if (!(l <= val and val <= r)) {
				return nullptr;
			}
			i++;
			return new TreeNode(val, dfs(l, val), dfs(val, r));
		};
		return dfs(INT_MIN, INT_MAX);
	}
};