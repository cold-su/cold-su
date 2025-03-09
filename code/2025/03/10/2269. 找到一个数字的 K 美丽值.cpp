class Solution {
public:
	int divisorSubstrings(int num, int k) {
		auto s = std::to_string(num);
		int ans = 0;
		for (int i = 0, n = s.size(); i + k - 1 < n; i++) {
			auto t = s.substr(i, k);
			int p = std::stoi(t);
			if (p == 0) {
				continue;
			}
			ans += num % p == 0;
		}
		return ans;
	}
};