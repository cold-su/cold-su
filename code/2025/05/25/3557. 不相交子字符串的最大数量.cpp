class Solution {
public:
	int maxSubstrings(std::string s) {
		int n = s.size();
		std::map<int, int> idx;
		int j = -1;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (idx.find(s[i]) != idx.end()) {
				int& k = idx[s[i]];
				if (i - k >= 3 and k > j) {
					ans++;
					j = i;
				}
				if (k <= j) {
					k = i;
				}
			} else {
				idx[s[i]] = i;
			}
		}
		return ans;
	}
};