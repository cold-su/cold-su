#include <iomanip>
#include <iostream>
#define int long long int

signed main() {
	double a, ans = 0;

	for (int i = 0; i < 12; i++) {
		std::cin >> a;
		ans += a;
	}

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "$" << ans / 12;
	return 0;
}
