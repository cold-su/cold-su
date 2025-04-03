#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		std::set<int> s;
		while (n--) {
			int p, l;
			std::cin >> p >> l;
			if (p == 1) {
				if (s.count(l)) {
					std::cout << "Already Exist\n";
				} else {
					s.insert(l);
				}
			} else {
				if (s.empty()) {
					std::cout << "Empty\n";
					continue;
				}
				auto i = s.lower_bound(l);
				auto j = i;
				if (i != s.begin()) {
					j--;
				}
				auto compare = [&]() {
					if (abs(*i - l) == abs(*j - l)) {
						return *i < *j;
					}
					return abs(*i - l) < abs(*j - l);
				};
				if (not compare()) {
					std::swap(i, j);
				}
				s.erase(*i);
				std::cout << *i << '\n';
			}
		}
	}
};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
