class Solution {
public:
	vector<int> getGoodIndices(vector<vector<int>>& v, int t) {
		std::vector<int> ans;
		for (int i = 0, n = v.size(); i < n; i++) {
			auto& x = v[i];
			int a = x[0], b = x[1], c = x[2], m = x[3];
			if (fpow(fpow(a, b, 10), c, m) == t) {
				ans.push_back(i);
			}
		}
		return ans;
	}
	int fpow(int a, int n, int mod) {
		int res = 1;
		while (n > 0) {
			if (n & 1) {
				res = res * a % mod;
			}
			a = a * a % mod;
			n >>= 1;
		}
		return res;
	};
};