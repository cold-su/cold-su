#include <bits/stdc++.h>

class queue {
	std::deque<int> d;
public:
	queue() {}

	void add(int x) {
		while (not d.empty() and d.back() < x) {
			d.pop_back();
		}
		d.push_back(x);
	}

	void del(int x) {
		if (not d.empty() and d.front() == x) {
			d.pop_front();
		}
	}

	int max() {
		return d.front();
	}
};

class Solution {
public:
	Solution() {}

	void solve() {
		int n, q;
		std::cin >> n >> q;
		std::vector<int> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		while (q--) {
			int d;
			std::cin >> d;
			queue q;
			int ans = INT_MAX;
			for (int i = 0; i < n; i++) {
				q.add(a[i]);
				if (i - d + 1 < 0) {
					continue;
				}
				ans = std::min(ans, q.max());
				q.del(a[i - d + 1]);
			}
			std::cout << ans << "\n";
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
