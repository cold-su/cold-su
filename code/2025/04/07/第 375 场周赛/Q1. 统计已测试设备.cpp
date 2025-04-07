class Solution {
public:
	int countTestedDevices(vector<int>& a) {
		int ans = 0;
		for (int i = 0, n = a.size(); i < n; i++) {
			auto p = a;
			if (a[i] > 0) {
				ans++;
				for (int j = i + 1; j < n; j++) {
					p[j]--;
				}
				if (std::ranges::max(p) <= 0) {
					ans--;
					continue;
				}
				a = p;
			}
		}
		return ans;
	}
}; ©leetcode