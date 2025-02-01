class Solution {
  public:
	string reformat(string s) {
		std::vector<int> a;
		std::vector<char> b;
		for (char c : s) {
			if ('0' <= c and c <= '9') {
				a.push_back(c - '0');
			} else {
				b.push_back(c);
			}
		}

		int n = a.size(), m = b.size();
		if (abs(m - n) > 1) {
			return "";
		}

		std::string ans(m + n, ' ');

		auto worka = [&] (bool k) {
			int p = k;
			for (int i = 0; i < a.size(); i++) {
				ans[p] = char(a[i] + '0');
				p += 2;
			}
		};
		auto workb = [&] (bool k) {
			int p = k;
			for (int i = 0; i < b.size(); i++) {
				ans[p] = char(b[i]);
				p += 2;
			}
		};

		if (n < m) {
			worka(true);
			workb(false);
		} else {
			workb(true);
			worka(false);
		}

		return ans;
	}
};