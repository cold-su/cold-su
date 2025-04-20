/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	TreeNode* buildTree(vector<int>& a, vector<int>& b) {
		int j = 0;
		auto construct = [&](this auto construct, int l, int r) -> TreeNode* {
			if (l >= r || j >= a.size()) {
				return NULL;
			}
			int i = l;
			for (; i < r; i++) {
				if (b[i] == a[j]) {
					break;
				}
			}
			if (b[i] != a[j]) {
				return NULL;
			}
			return new TreeNode(a[j++], construct(l, i), construct(i + 1, r));
		};
		return construct(0, a.size());
	}
};