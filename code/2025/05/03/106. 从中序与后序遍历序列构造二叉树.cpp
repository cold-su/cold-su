class Solution {
public:
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
		std::map<int, int> map;
		for (int i = 0; i < postorder.size(); i++) {
			map[postorder[i]] = i;
		}
		auto build = [=](this auto& build, int l, int r, int L, int R) -> TreeNode* {
			if (l > r) {
				return nullptr;
			}
			int val = postorder[R];
			if (l == r || L == R) {
				return new TreeNode(val);
			}
			int i = l;
			for (; i < r; i++) {
				if (inorder[i] == val) {
					break;
				}
			}
			int j = L;
			for (int k = l; k <= i - 1; k++) {
				j = std::max(j, map[inorder[k]]);
			}
			return new TreeNode(val, build(l, i - 1, L, j), build(i + 1, r, j + (i - 1 >= l), R - 1));
		};
		return build(0, inorder.size() - 1, 0, postorder.size() - 1);
	}
};