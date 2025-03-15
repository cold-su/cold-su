#include <bits/stdc++.h>

template <typename T>
class monostack {
	std::deque<std::pair<T, int>> d;
public:
	explicit monostack<T>() {}

	bool empty() {
		return d.empty();
	}

	void push(T val, int i) {
		while (not d.empty() and d.back().first <= val) {
			d.pop_back();
		}
		d.push_back({val, i});
	}

	void pop() {
		d.pop_back();
	}

	std::pair<T, int> top() {
		return d.back();
	}
};

class Solution {
public:
	Solution() {}

	void solve() {
		int n;
		std::cin >> n;
		std::vector<int> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		monostack<int> s;
		std::vector<int> ans(n);
		for (size_t i = n; i--;) {
			while (not s.empty() and s.top().first <= a[i]) {
				s.pop();
			}
			ans[i] = not s.empty() ? s.top().second : 0;
			s.push(a[i], i + 1);
		}
		for (int i = 0; i < n; i++) {
			std::cout << ans[i] << " \n"[i == n - 1];
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
