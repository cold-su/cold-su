class Solution {
  public:
	int lengthOfLongestSubstring(string s) {
		std::map<char, int> map;
		int ans = 0;
		for (int i = 0, j = 0; i < s.size(); i++) {
			char c = s[i];
			map[c]++;
			while (map[c] > 1 and j < i) {
				map[s[j]]--;
				j++;
			}
			ans = std::max(ans, i - j + 1);
		}
		return ans;
	}
};