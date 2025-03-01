// A simple BIT implementation.
// from https://oi-wiki.org/math/permutation/#__tabbed_1_2
class bit {
	int n;
	std::vector<int> su;

public:
	bit(int n) : n(n), su(n + 1) {}

	// Add v to the x-th number.
	void add(int x, int v) {
		for (; x <= n; x += x & (-x)) {
			su[x] += v;
		}
	}

	// Get the cumulative sum till the x-th number.
	int query(int x) {
		int res = 0;
		for (; x; x &= x - 1) {
			res += su[x];
		}
		return res;
	}
};