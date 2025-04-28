class Solution {
public:
	int countSymmetricIntegers(int l, int h) {
		int ans = 0;
		for (int i = l; i <= h; i++) {
			auto str = std::to_string(i);
			int n = str.size();
			if (n / 2 * 2 == n) {
				int s = 0;
				for (int j = 0; j < n / 2; j++) {
					s += str[j];
				}
				for (int j = n / 2; j < n; j++) {
					s -= str[j];
				}
				if (s == 0) {
					ans++;
				}
			}
		}
		return ans;
	}
};
