class Solution {
  public:
	int countBalls(int l, int r) {
		std::map<int, int> map;
		for (int i = l; i <= r; i++) {
			int a = 0;
			int x = i;
			while (x) {
				a += x % 10;
				x /= 10;
			}
			map[a]++;
		}
		int max = 0;
		for (auto [k, v] : map) {
			if (v > max) {
				max = v;
			}
		}
		return max;
	}
};