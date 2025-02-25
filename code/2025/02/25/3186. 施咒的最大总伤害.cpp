class Solution {
public:
	long long maximumTotalDamage(vector<int>& power) {
		std::map<int, int> cnt;
		for (int x : power) {
			cnt[x]++;
		}
		std::vector<std::pair<int, int>> a(cnt.begin(), cnt.end());
		std::ranges::sort(a);
		int n = a.size();
		std::vector<long long> f(n + 1);
		for (int i = 0, j = 0; i < n; i++) {
			auto& [k, v] = a[i];
			while (a[j].first < k - 2) {
				j++;
			}
			f[i + 1] = std::max(f[j] + 1LL * k * v, f[i]);
		}
		return f.back();
	}
};