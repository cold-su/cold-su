class Solution {
public:
	int longestArithSeqLength(std::vector<int>& a) {
		int n = a.size();
		std::vector<std::map<int, int>> memo(n); // == std::map<std::tuple<int, int, int>, int> map;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				int d = a[i] - a[j];
				auto& s = memo[i][d];
				auto& t = memo[j][d];
				// initialize
				{
					s = std::max(s, 1);
					t = std::max(t, 1);
				}
				// calculate answer
				{
					s = std::max(s, t + 1);
					ans = std::max(ans, s);
				}
			}
		}
		return ans;
	}
};