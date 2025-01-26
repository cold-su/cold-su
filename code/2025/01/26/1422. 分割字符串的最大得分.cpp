class Solution {
  public:
	int maxScore(string s) {
		int n = s.size();
		std::vector<int> a(n + 1), b(n + 1);
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			a[i + 1] += a[i] + (s[i] == '1');
			b[i + 1] += b[i] + (s[i] == '0');
			cnt += s[i] == '1';
		}
		int ans = 0;
		for (int i = 0; i < n - 1; i++) {
			ans = std::max(ans, b[i + 1] + cnt - a[i + 1]);
		}
		return ans;
	}
};