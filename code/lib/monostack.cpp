template <typename T, typename Cmp = std::less<T>>
class monostack {
	std::deque<std::pair<T, int>> d;
public:
	explicit monostack<T, Cmp>() {}

	bool empty() {
		return d.empty();
	}

	void push(T val, int i) {
		while (not d.empty() and Cmp{}(d.back().first, val)) {
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