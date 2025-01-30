class Solution {
  public:
	int maxSum(vector<int>& a) {
		int n = a.size();
		auto p = [] (int x) {
			int res = 0;
			while (x) {
				// std::cout << x << "\n";
				res = std::max(res, x % 10);
				x /= 10;
			}
			// std::cout << res << "\n";
			return res;
		};
		std::map<int, int> map;
		int ans = -1;
		for (int i = 0; i < n; i++) {
			int x = p(a[i]);
			if (map.count(x)) {
				ans = std::max(ans, a[i] + map[x]);
			}
			map[x] = std::max(map[x], a[i]);
		}
		// for (auto [l, r] : map) {
		// 	std::cout << std::format("{} {}\n", l, r);
		// }
		return ans;
	}
};