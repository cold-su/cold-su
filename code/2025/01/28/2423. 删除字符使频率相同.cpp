class Solution {
  public:
	bool equalFrequency(string s) {
		int n = s.size();
		for (int i = 0; i < n; i++) {
			std::map<char, int> map;
			for (int j = 0; j < n; j++) {
				if (i == j) {
					continue;
				}
				map[s[j]]++;
			}
			int p = map.begin()->second;
			bool ok = true;
			for (auto [k, v] : map) {
				if (p != v) {
					ok = false;
				}
			}
			if (ok) {
				return true;
			}
		}
		return false;
	}
};