class Solution {
  public:
	int numPairsDivisibleBy60(vector<int>& a) {
		int ans = 0;
		int u = 60;
		std::vector<int> f(u);
		for (int &x : a) {
			x %= u;
			ans += f[(u - x) % u];
			f[x]++;
		}
		return ans;
	}
};
/*
class Solution {
  public:
	int numPairsDivisibleBy60(vector<int>& a) {
		std::map<int, int> map;
		int ans = 0;
		for (int &x : a) {
			x %= 60;
			ans += map[(60 - x) % 60];
			map[x]++;
		}
		return ans;
	}
};
*/