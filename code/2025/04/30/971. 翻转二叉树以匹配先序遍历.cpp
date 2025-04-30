class Solution {
public:
	vector<int> flipMatchVoyage(TreeNode* r, vector<int>& a) {
		std::vector<int> ans;
		int i = 0;
		auto dfs = [&](this auto& dfs, TreeNode* r, TreeNode* p) -> void {
			if (!r || ans == std::vector<int> {-1}) {
				return;
			}
			if (r->val != a[i]) {
				if (p) {
					std::swap(p->left, p->right);
					r = p->left;
					if (!r) {
						return;
					}
				}
				if (r->val == a[i]) {
					ans.push_back(p->val);
				} else {
					ans = {-1};
				}
			}
			i++;
			dfs(r->left, r);
			dfs(r->right, r);
		};
		dfs(r, NULL);
		return ans;
	}
};