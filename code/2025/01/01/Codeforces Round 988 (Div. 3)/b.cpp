#inclu de <bits/stdc++.h>

const bool MULTI = true;
#define int long long int

void solve() {
	int k;
	std::cin >> k;
	std::vector<int> nums(k);
	std::map<int, int> map;
	for (int& x : nums) {
		std::cin >> x;
		map[x]++;
	}
	k -= 2;
	for (int x : nums) {
		map[x]--;
		int t = k / x;
		if (map[t] >= 1 and x * t == k) {
			std::cout << x << " " << t;
			break;
		}
		map[x]++;
	}
	std::cout << "\n";
}

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	if (MULTI) {
		int t;
		std::cin >> t;
		while (t--)
			solve();
	} else solve();
	return 0;
}
