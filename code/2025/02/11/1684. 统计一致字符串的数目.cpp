class Solution {
  public:
	int countConsistentStrings(string allowed, vector<string>& words) {
		int p = 0;
		for (char c : allowed) {
			p |= 1 << (c - 'a');
		}
		int ans = 0;
		for (auto && s : words) {
			int i = 0;
			for (char c : s) {
				i |= 1 << (c - 'a');
			}
			if ((i | p) == p) {
				ans++;
			}
		}
		return ans;
	}
};

class Solution {
  public:
	int countConsistentStrings(string allowed, vector<string>& words) {
		std::vector<bool> p(26);
		for (char &c : allowed) {
			p[c - 'a'] = true;
		}
		int ans = 0;
		for (auto &s : words) {
			bool ok = true;
			for (int i = 0; i < s.size(); i++) {
				if (p[s[i] - 'a'] == false) {
					ok = false;
					break;
				}
			}
			ans += ok;
		}
		return ans;
	}
};