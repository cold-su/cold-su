class Solution {
public:
	int minimumOperations(vector<int>& a) {
		int n = a.size();
		std::vector<int> f(n, 1);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[i] >= a[j]) {
					f[i] = std::max(f[i], f[j] + 1);
				}
			}
		}
		return n - std::ranges::max(f);
	}
};