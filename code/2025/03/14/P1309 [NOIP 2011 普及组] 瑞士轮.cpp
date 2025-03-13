#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	Solution() {}

	struct p {
		int id, s, w;
	};

	void solve() {
		int n, r, q;
		std::cin >> n >> r >> q;
		std::vector<p> a(n * 2);
		for (int i = 0; i < n * 2; i++) {
			a[i].id = i + 1;
			std::cin >> a[i].s;
		}
		for (int i = 0; i < n * 2; i++) {
			std::cin >> a[i].w;
		}
		std::sort(a.begin(), a.end());
		while (r--) {
			for (int i = 0; i + 1 < n * 2; i += 2) {
				if (a[i].w > a[i + 1].w) {
					a[i].s++;
				} else {
					a[i + 1].s++;
				}
			}
			std::stable_sort(a.begin(), a.end(), [](p l, p r) {
				if (l.s == r.s) {
					return l.id < r.id;
				}
				return l.s > r.s;
			});
		}
		std::cout << a[q - 1].id;
	}

};

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution p;
	p.solve();
	return 0;
}
