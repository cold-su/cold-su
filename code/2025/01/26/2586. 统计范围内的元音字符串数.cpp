class Solution {
  public:
	int vowelStrings(vector<string>& words, int left, int right) {
		auto is = [] (char x) {
			return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';
		};
		int ans = 0;
		for (int i = left; i <= right; i++) {
			auto s = words[i];
			ans += is(s.front()) and is(s.back());
		}
		return ans;
	}
};