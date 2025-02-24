class Solution {
public:
	long long maximumImportance(int n, vector<vector<int>>& a) {
		long long ans = 0;
		std::vector<int> d(n);
		for (auto& p : a) {
			int x = p[0], y = p[1];
			d[x]++;
			d[y]++;
		}
		std::ranges::sort(d);
		for (int i = 0; i < n; i++) {
			ans += 1LL * d[i] * (i + 1);
		}
		return ans;
	}
};