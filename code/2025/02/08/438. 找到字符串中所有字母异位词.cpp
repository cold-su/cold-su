class Solution {
  public:
	vector<int> findAnagrams(string s, string p) {
		int n = s.size();
		std::vector<int> a(26), b(26), ans;
		for (char c : p) {
			a[c - 'a']++;
		}
		for (int i = 0, k = p.size(); i < n; i++) {
			b[s[i] - 'a']++;
			if (i - k + 1 >= 0) {
				if (a == b) {
					ans.push_back(i - k + 1);
				}
				b[s[i - k + 1] - 'a']--;
			}
		}
		return ans;
	}
};