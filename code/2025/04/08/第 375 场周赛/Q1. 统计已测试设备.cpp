class Solution {
public:
	int countTestedDevices(vector<int>& a) {
		int ans = 0;
		for (int i = 0, n = a.size(); i < n; i++) {
			if (a[i] == 0) {
				continue;
			} else {
				ans++;
				for (int j = i + 1; j < n; j++) {
					a[j] = std::max(a[j] - 1, 0);
				}
			}
		}
		return ans;
	}
};