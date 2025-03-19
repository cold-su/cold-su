template <typename T, typename Compare = std::less<T>>
class monoqueue {
	/* (value, idx) */
	std::deque<std::pair<T, int>> d;
public:
	explicit monoqueue<T, Compare>() {}

	bool empty() {
		return d.empty();
	}

	void push(T val, int i) {
		while (not d.empty() and Compare{}(d.back().first, val)) {
			d.pop_back();
		}
		d.push_back(std::pair{val, i});
	}

	void erase(T val) {
		if (not d.empty() and d.front().first == val) {
			d.pop_front();
		}
	}

	std::pair<T, int> top() {
		return d.front();
	}
};