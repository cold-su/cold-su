class Solution {
public:
	TreeNode* constructFromPrePost(vector<int>& a, vector<int>& b) {
		int n = a.size();
		auto find = [&](std::vector<int>& v, int x) {
			for (int i = 0; ; i++) {
				if (v[i] == x) {
					return i;
				}
			}
		};
		auto dfs = [&](this auto& dfs, int l, int r) -> TreeNode* {
			if (l > r) {
				return NULL;
			}
			int val = b[r];
			if (l == r) {
				return new TreeNode(val);
			}
			int i = find(a, val);
			if (i + 1 >= n) {
				return new TreeNode(val);
			}
			int nxt = a[i + 1];
			int j = l;
			for (; j <= r; j++) {
				if (b[j] == nxt) {
					break;
				}
			}
			return new TreeNode(val, dfs(l, j), dfs(j + 1, r - 1));
		};
		return dfs(0, n - 1);
	}
};