template <typename T>
class bit {
	int n;
	std::vector<T> su;

public:
	explicit bit<T>(int n) : n(n), su(n + 1) {}

	// Add v to the x-th number.
	void add(int x, T v) {
		for (; x <= n; x += x & (-x)) {
			su[x] += v;
		}
	}

	// Get the cumulative sum till the x-th number.
	T query(int x) {
		T res {};
		for (; x; x &= x - 1) {
			res += su[x];
		}
		return res;
	}
};