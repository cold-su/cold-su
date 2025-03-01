class Solution {
	using str = std::string;
	using p = std::pair<int, int>;
	str s;

	bool is(int i, int j) {
		for (; i < j; i++, j--) {
			if (s[i] != s[j]) {
				return false;
			}
		}
		return true;
	}

	p max(p a, p b) {
		return a.second - a.first > b.second - b.first ? a : b;
	}

	str make(p x) {
		return s.substr(x.first, x.second - x.first + 1);
	}

	// void dbg(p x) {
	// 	std::cout << std::format(" ({}, {}) ", x.first, x.second);
	// }

public:
	string longestPalindrome(string s) {
		this->s = s;
		int n = s.size();
		std::vector<p> f(n + 1);
		for (int i = 0; i < n; i++) {
			// for (auto x : f) {
			// 	dbg(x);
			// }
			// std::cout << "\n";
			std::vector<p> nf(n + 1);
			for (int j = i; j < n; j++) {
				if (is(i, j)) {
					nf[i + 1] = max(f[i], max(nf[i], p{i, j}));
				}
			}
			f = nf;
		}
		return make(f[n]);
	}
};