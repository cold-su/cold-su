// 空间、时间优化
class Solution {
  public:
	long long countCompleteDayPairs(vector<int>& a) {
		unsigned long long ans = 0;
		int u = 24;
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
	long long countCompleteDayPairs(vector<int>& a) {
		unsigned long long ans = 0;
		std::map<int, int> map;
		int u = 24;
		for (int &x : a) {
			x %= u;
			ans += map[(u - x) % u];
			map[x]++;
		}
		return ans;
	}
};
*/