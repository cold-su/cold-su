class Solution {
public:
	int firstMissingPositive(vector<int>& a) {
		long max = std::ranges::max(a);
		if (max <= 0) {
			return 1;
		}
		std::vector<bool> b(1 + max);
		for (int x : a) {
			if (x >= 0) {
				b[x] = true;
			}
		}
		int i = 0;
		while (++i <= max and b[i]);
		return i;
	}
};