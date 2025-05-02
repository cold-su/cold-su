class Solution {
public:
	TreeNode* createBinaryTree(vector<vector<int>>& a) {
		std::map<int, TreeNode*> node;
		std::map<int, int> fa;
		for (auto& x : a) {
			int p = x[0], c = x[1], f = x[2];
			if (!node.count(p)) {
				node[p] = new TreeNode(p);
			}
			if (!node.count(c)) {
				node[c] = new TreeNode(c);
			}
			(f ? node[p]->left : node[p]->right) = node[c];
			fa[c] = p;
		}
		auto find = [&](this auto& find, int x) -> int {
			if (fa[x] == 0) {
				return x;
			}
			return find(fa[x]);
		};
		return node[find(a.front()[0])];
	}
};