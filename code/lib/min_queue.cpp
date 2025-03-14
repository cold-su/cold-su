class queue {
	std::deque<int> d;
public:
	queue() {}

	void add(int x) {
		while (not d.empty() and d.back() > x) {
			d.pop_back();
		}
		d.push_back(x);
	}

	void del(int x) {
		if (not d.empty() and d.front() == x) {
			d.pop_front();
		}
	}

	int min() {
		return d.front();
	}
};