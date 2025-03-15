class min_queue {
	std::deque<int> d;
public:
	min_queue() {}

	void push(int x) {
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