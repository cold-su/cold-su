class Solution {
public:
	int kthLargestPerfectSubtree(TreeNode* root, int k) {
		dfs(root);
		int n = a.size();
		if (n - k < 0) {
			return -1;
		}
		std::nth_element(a.begin(), a.begin() + n - k, a.end());
		return a[n - k];
	}
private:
	std::vector<int> a;

	std::tuple<bool, int, int> dfs(TreeNode* r) {
		if (!r) {
			return {false, 0, 0};
		}
		if (!r->left and !r->right) {
			a.push_back(1);
			return {true, 1, 1};
		}
		auto [li, ld, ls] = dfs(r->left);
		auto [ri, rd, rs] = dfs(r->right);
		if (std::min(li, ri) == 0) {
			return {false, 0, 0};
		}
		if (ld == rd) {
			a.push_back(ls * 2 + 1);
			return {true, ld + 1, ls * 2 + 1};
		}
		return {false, 0, 0};
	}
};