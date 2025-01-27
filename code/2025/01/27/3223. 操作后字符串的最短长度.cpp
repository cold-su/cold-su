class Solution {
  public:
	int minimumLength(string s) {
		std::vector<int> p(26);
		for (int i = 0; i < s.size(); i++) {
			int &x = p[s[i] - 'a'];
			x++;
			if (x >= 3) {
				x = 1;
			}
		}
		return std::reduce(p.begin(), p.end());
	}
};