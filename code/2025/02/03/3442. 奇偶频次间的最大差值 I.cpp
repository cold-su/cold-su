class Solution {
  public:
	int maxDifference(string s) {
		std::map<char, int> map;
		int ans = 0;
		int f[2] {INT_MAX};
		for (char c : s) {
			map[c]++;
		}
		for (auto [k, v] : map) {
			if (v & 1) {
				f[1] = std::max(v, f[1]);
			} else {
				f[0] = std::min(v, f[0]);
			}
		}
		return f[1] - f[0];
	}
};