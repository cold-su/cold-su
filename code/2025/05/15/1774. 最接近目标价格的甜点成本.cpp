class Solution 
{
public:
	int
	closestCost(std::vector<int>& a, std::vector<int>& b, int target)
	{
		int n = b.size();
		auto which = [&](int l, int r) {
			int L = abs(l - target), R = abs(r - target);
			if (L == R) {
				return std::min(l, r);
			}
			return L > R ? r : l;
		};
		int ans = INT_MAX;
		for (int x : a) {
			int p = x;
			auto dfs = [&](this auto& dfs, int y, int k) -> void {
				ans = which(ans, p);
				if (p > target || y >= n) {
					return;
				}
				int q = k * (y >= 0 ? b[y] : 0);
				for (int _k = 0; _k <= 2; _k++) {
					p += q;
					dfs(y + 1, _k);
					p -= q;
				}
			};
			dfs(-1, 0);
		}
		return ans;
	}
};