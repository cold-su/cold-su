class Solution {
  public:
	int minimumRecolors(string s, int k) {
		int cnt = std::count(s.begin(), s.begin() + k, 'W');
		int ans = cnt;
		for (int i = k; i < s.size(); i++) {
			cnt += s[i] == 'W';
			cnt -= s[i - k] == 'W';
			ans = std::min(ans, cnt);
		}
		return ans;
	}
};