#include <bits/stdc++.h>

class Solution {
public:
	Solution() {}

	void solve() {
		int q;
		std::cin >> q;
		std::map<std::string, int> map;
		while (q--) {
			int p;
			std::cin >> p;
			if (p == 1) {
				std::string n;
				int sc;
				std::cin >> n >> sc;
				map[n] = sc;
				std::cout << "OK\n";
			} else if (p == 2) {
				std::string n;
				std::cin >> n;
				if (map.count(n)) {
					std::cout << map[n] << "\n";
					continue;
				}
				std::cout << "Not found\n";
			} else if (p == 3) {
				std::string n;
				std::cin >> n;
				if (map.count(n)) {
					map.erase(n);
					std::cout << "Deleted successfully\n";
					continue;
				}
				std::cout << "Not found\n";
			} else if (p == 4) {
				std::cout << map.size() << "\n";
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
