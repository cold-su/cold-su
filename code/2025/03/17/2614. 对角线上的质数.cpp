auto is = [](int n) {
	std::vector<bool> res(n + 1);
	std::fill(res.begin(), res.end(), true);
	res[0] = res[1] = false;
	for (int i = 2; i < sqrt(n); i++) {
		if (res[i]) {
			for (int j = i * i; j <= n; j += i) {
				res[j] = false;
			}
		}
	}
	return res;
} (4 * 1e6);
class Solution {
public:
	int diagonalPrime(vector<vector<int>>& a) {
		int n = a.size();
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((i - j == 0 or i + j == n - 1) and is[a[i][j]]) {
					ans = std::max(ans, a[i][j]);
				}
			}
		}
		return ans;
	}
};