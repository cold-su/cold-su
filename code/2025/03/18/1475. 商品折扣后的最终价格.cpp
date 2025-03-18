template <typename T>
class monostack {
	std::deque<std::pair<T, int>> d;
public:
	explicit monostack<T>() {}

	bool empty() {
		return d.empty();
	}

	void push(T val, int i) {
		while (not d.empty() and d.back().first >= val) {
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

class Solution {
public:
	vector<int> finalPrices(vector<int>& a) {
		int n = a.size();
		std::vector<int> b(n);
		monostack<int> s;
		for (size_t i = n; i--;) {
			while (not s.empty() and s.top().first > a[i]) {
				s.pop();
			}
			b[i] = not s.empty() ? s.top().first : 0;
			s.push(a[i], i);
		}
		for (int i = 0; i < n; i++) {
			a[i] -= b[i];
		}
		return a;
	}
};