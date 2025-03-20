template <class T,
          class Compare = std::less<T>>
class monoqueue {
protected:
	std::deque<std::pair<T, int>/*(value, index)*/> d;
public:
	explicit monoqueue<T, Compare>() {}

	bool empty() {
		return d.empty();
	}

	void push(T val, int index) {
		while (not d.empty() and Compare{}(d.back().first, val)) {
			d.pop_back();
		}
		d.push_back(std::pair{val, index});
	}

	void erase(T val) {
		if (not d.empty() and d.back().first == val) {
			d.pop_back();
		}
	}

	std::pair<T, int> top() {
		return d.back();
	}
};