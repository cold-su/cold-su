#include <iostream>
#include <cstring>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b, k;
	while (std::cin >> a >> b >> k && a != 0 && b != 0) {
		std::string t[2] {std::to_string(a), std::to_string(b)};

		int m = t[0].size();
		int n = t[1].size();
		if (std::stoi(t[0].substr(std::max(0, m - k))) == std::stoi(t[1].substr(std::max(0, n - k)))) {
			std::cout << -1 << "\n";
		} else {
			std::cout << a + b << "\n";
		}
	}

	return 0;
}
