class Solution {
public:
	int countSymmetricIntegers(int low, int high) {
		int ans = 0;
		for (int i = low; i <= high; i++) {
			auto s = std::to_string(i);
			int n = s.size();
			// if (n & 1) {
			// 	i = n * 10;
			// 	continue;
			// }
			int f[2] {};
			for (int j = 0; j < n / 2; j++) {
				f[0] += s[j];
			}
			for (int j = n / 2; j < n; j++) {
				f[1] += s[j];
			}
			ans += f[0] == f[1];
		}
		return ans;
	}
};