#include <bits/stdc++.h>
#define int long long int

template <typename T>
class SegTreeLazyRangeAdd {
	std::vector<T> tree, lazy;
	std::vector<T> *arr;
	int n, root, n4, end;

	void maintain(int cl, int cr, int p) {
		int cm = cl + (cr - cl) / 2;
		if (cl != cr && lazy[p]) {
			lazy[p * 2] += lazy[p];
			lazy[p * 2 + 1] += lazy[p];
			tree[p * 2] += lazy[p] * (cm - cl + 1);
			tree[p * 2 + 1] += lazy[p] * (cr - cm);
			lazy[p] = 0;
		}
	}

	T range_sum(int l, int r, int cl, int cr, int p) {
		if (l <= cl && cr <= r) return tree[p];
		int m = cl + (cr - cl) / 2;
		T sum = 0;
		maintain(cl, cr, p);
		if (l <= m) sum += range_sum(l, r, cl, m, p * 2);
		if (r > m) sum += range_sum(l, r, m + 1, cr, p * 2 + 1);
		return sum;
	}

	void range_add(int l, int r, T val, int cl, int cr, int p) {
		if (l <= cl && cr <= r) {
			lazy[p] += val;
			tree[p] += (cr - cl + 1) * val;
			return;
		}
		int m = cl + (cr - cl) / 2;
		maintain(cl, cr, p);
		if (l <= m) range_add(l, r, val, cl, m, p * 2);
		if (r > m) range_add(l, r, val, m + 1, cr, p * 2 + 1);
		tree[p] = tree[p * 2] + tree[p * 2 + 1];
	}

	void build(int s, int t, int p) {
		if (s == t) {
			tree[p] = (*arr)[s];
			return;
		}
		int m = s + (t - s) / 2;
		build(s, m, p * 2);
		build(m + 1, t, p * 2 + 1);
		tree[p] = tree[p * 2] + tree[p * 2 + 1];
	}

public:
	explicit SegTreeLazyRangeAdd<T>(std::vector<T> v) {
		n = v.size();
		n4 = n * 4;
		tree = std::vector<T>(n4, 0);
		lazy = std::vector<T>(n4, 0);
		arr = &v;
		end = n - 1;
		root = 1;
		build(0, end, 1);
		arr = nullptr;
	}

	void show(int p, int depth = 0) {
		if (p > n4 || tree[p] == 0) return;
		show(p * 2, depth + 1);
		for (int i = 0; i < depth; ++i) putchar('\t');
		printf("%d:%d\n", tree[p], lazy[p]);
		show(p * 2 + 1, depth + 1);
	}

	T range_sum(int l, int r) { return range_sum(l, r, 0, end, root); }

	void range_add(int l, int r, T val) { range_add(l, r, val, 0, end, root); }
};
class Solution {
public:
	void solve() {
		int n, m;
		std::cin >> n >> m;
		std::vector<int> a(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		SegTreeLazyRangeAdd<int> st(a);
		while (m--) {
			int p, x, y;
			std::cin >> p >> x >> y;
			x--, y--;
			if (p == 1) {
				int k;
				std::cin >> k;
				st.range_add(x, y, k);
			} else {
				std::cout << st.range_sum(x, y) << "\n";
			}
		}
	}
};

signed main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	Solution* p;
	p->solve();
	return 0;
}
