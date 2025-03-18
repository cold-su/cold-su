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
class StockSpanner {
	monostack<int> s;
	int i = 1;
public:
	StockSpanner() {

	}

	int next(int val) {
		while (not s.empty() and s.top().first <= val) {
			s.pop();
		}
		int ans = not s.empty() ? i - s.top().second : i;
		s.push(val, i++);
		return ans;
	}
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */